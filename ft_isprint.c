/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:21:09 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:22:22 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char	test_chars[10] = {' ', '~', 'a', 'Z', '5', '!', '\n', '\t', 127, 0};
// 	int		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		char c = test_chars[i];
// 		int result_ft = ft_isprint(c);
// 		int result_std = isprint(c);

// 		printf("Test %d: Character '%c' (ASCII %d)\n", i + 1, c, c);
// 		printf("ft_isprint: %d\n", result_ft);
// 		printf("isprint: %d\n", result_std);
// 		printf("Match: %s\n\n", ((result_ft >= 1) == (result_std >= 1)) ? 
// "Yes" : "No");
// 	}

// 	return (0);
// }
