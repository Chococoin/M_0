/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:24:10 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 17:36:35 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*test_pairs[5][2] = {
// 		{"hello", "hello"},
// 		{"hello", "world"},
// 		{"abc", "abcd"},
// 		{"test", "testing"},
// 		{"same", "same"}
// 	};
// 	size_t	n_values[5] = {5, 3, 4, 2, 4};
// 	int		i;
// 	for (i = 0; i < 5; i++)
// 	{
// 		const char *s1 = test_pairs[i][0];
// 		const char *s2 = test_pairs[i][1];
// 		size_t n = n_values[i];
// 		int result_ft = ft_strncmp(s1, s2, n);
// 		int result_std = strncmp(s1, s2, n);
// 		printf("Test %d: Comparing '%s' and '%s' with n = %zu\n", 
// i + 1, s1, s2, n);
// 		printf("ft_strncmp: %d\n", result_ft);
// 		printf("strncmp: %d\n", result_std);
// 		printf("Match: %s\n\n", ((result_ft == result_std) ? "Yes" : "No"));
// 	}

// 	return (0);
// }
