/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:15:42 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:23:05 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	test_chars[10] = {'a', 'Z', '5', '!', 'b', 'y', '0', '9', 'G', 'm'};
// 	int		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		char c = test_chars[i];
// 		int result_ft = ft_isalnum(c);
// 		int result_std = isalnum(c);

// 		printf("Test %d: Character '%c'\n", i + 1, c);
// 		printf("ft_isalnum: %d\n", result_ft);
// 		printf("isalnum: %d\n", result_std);
// 		printf("Match: %s\n\n", ((result_ft >= 1) == (result_std >= 1)) ? 
// "Yes" : "No");
// 	}

// 	return (0);
// }
