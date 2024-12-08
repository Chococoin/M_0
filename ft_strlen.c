/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:13:13 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 17:26:26 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*test_strings[] = {"Hello", "", "42", "This is a test", 
// "Another test", "1234567890", "A", " ", "\n", "End"};
// 	size_t		i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		const char *str = test_strings[i];
// 		size_t result_ft = ft_strlen(str);
// 		size_t result_std = strlen(str);

// 		printf("Test %zu: String \"%s\"\n", i + 1, str);
// 		printf("ft_strlen: %zu\n", result_ft);
// 		printf("strlen: %zu\n", result_std);
// 		printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");
// 	}

// 	return (0);
// }