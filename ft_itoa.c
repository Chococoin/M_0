/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:17:00 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/07 23:13:56 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_length(int n)
{
	int	length;
	int	m;

	length = 0;
	m = n;
	if (n < 0)
		m = -m;
	while (m >= 1)
	{
		m /= 10;
		length++;
	}
	return (length);
}

static void	ft_freemem(char *bffr, int j)
{
	while (j + 1 > 0)
		free((void *)&bffr[j--]);
}

static void	ft_fill_chars(char *character, int n, int length)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (i < length)
	{
		character[length -1 - i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	character[length] = '\0';
}

char	*ft_itoa(int n)
{
	int		length;
	char	*character;
	int		is_negative;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	length = ft_get_num_length(n);
	is_negative = (n < 0);
	if (is_negative)
		length++;
	character = (char *)malloc(sizeof(char) * (length + 1));
	if (!character)
	{
		ft_freemem(character, length);
		return (NULL);
	}
	ft_fill_chars(character, n, length);
	if (is_negative)
		character[0] = '-';
	return (character);
}
