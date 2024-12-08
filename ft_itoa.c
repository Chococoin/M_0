/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:17:00 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:20:44 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_length(long n)
{
	int		length;
	long	m;

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

static void	ft_fill_chars(char *character, long n, int length)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		character[0] = '0';
	while (i < length && n > 0)
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
	long	nbr;

	nbr = n;
	length = ft_get_num_length(nbr);
	is_negative = (nbr < 0);
	if (is_negative)
		length++;
	if (nbr == 0)
		length = 1;
	character = (char *)malloc(sizeof(char) * (length + 1));
	if (!character)
	{
		ft_freemem(character, length);
		return (NULL);
	}
	ft_fill_chars(character, nbr, length);
	if (is_negative)
		character[0] = '-';
	return (character);
}

// int	main(void)
// {
// 	int		test_numbers[10] = {0, -1, 1, 123, -123, 2147483647,
//  -2147483648, 42, -42, 1000};
// 	int		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		int num = test_numbers[i];
// 		char *result_ft = ft_itoa(num);

// 		printf("Test %d: Number '%d'\n", i + 1, num);
// 		printf("ft_itoa: %s\n\n", result_ft);

// 		free(result_ft);
// 	}

// 	return (0);
// }
