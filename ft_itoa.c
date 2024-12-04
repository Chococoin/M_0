/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:17:00 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/04 14:56:08 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

static int	ft_get_num_length(int n)
{
	int	length;
	int sign;

	length = 0;
	sign = 1;
	if (n <= 0)
		sign = -1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length - sign);
}

static void	ft_fill_chars(char *character, int n, int length)
{
	int i;
	character[length + 1] = '\0';
	
	i = 0;
	while (i <= length)
	{
		character[length - i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char	*character;
	int		sign;
	long	num;

	num = (long)n;
	sign = (num < 0);
	if (sign)
		num = -num;
	length = ft_get_num_length(n) + sign;
	character = (char *)malloc(sizeof(char) * (length + 1));
	if (!character)
		return (NULL);
	if (sign)
		character[0] = '-';
	ft_fill_chars(character , n, length);
	return (character);
}

int main()
{
	printf("El valor máximo de un int es: %d\n", INT_MAX);
	printf("El valor mínimo de un int es: %d\n", INT_MIN);
	int a = 2147483647;
	char *b = ft_itoa(a);
	printf("%s", b);
}