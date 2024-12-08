/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:21:20 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:26:07 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char	test_chars[10] = {'a', 'Z', '5', '!', 'b', 'y', '0', '9', 'g', 'm'};
// 	int		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		char c = test_chars[i];
// 		int result_ft = ft_toupper(c);
// 		int result_std = toupper(c);

// 		printf("Test %d: Character '%c'\n", i + 1, c);
// 		printf("ft_toupper: %d\n", result_ft);
// 		printf("toupper: %d\n", result_std);
// 		printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");
// 	}

// 	return (0);
// }