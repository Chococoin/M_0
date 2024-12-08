/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:58:37 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/25 07:39:10 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

static int	isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *test_cases[] = {
// 		"42",
// 		"   -42",
// 		"4193 with words",
// 		"words and 987",
// 		"-91283472332",
// 		"0",
// 		"+1",
// 		"2147483647",
// 		"-2147483648",
// 		"   +123abc"
// 	};
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("Test case %d: \"%s\"\n", i + 1, test_cases[i]);
// 		printf("ft_atoi: %d\n", ft_atoi(test_cases[i]));
// 		printf("atoi: %d\n", atoi(test_cases[i]));
// 		printf("\n");
// 	}
// 	return (0);
// }