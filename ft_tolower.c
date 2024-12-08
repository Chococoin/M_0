/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:35:22 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:24:35 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char	test_chars[10] = {'a', 'Z', '5', '!', 'b', 'y', '0', 
// '9', 'G', 'M'};
// 	int		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		char c = test_chars[i];
// 		int result_ft = ft_tolower(c);
// 		int result_std = tolower(c);

// 		printf("Test %d: Character '%c'\n", i + 1, c);
// 		printf("ft_tolower: %d\n", result_ft);
// 		printf("tolower: %d\n", result_std);
// 		printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");
// 	}

// 	return (0);
// }
