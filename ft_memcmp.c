/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:43:40 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:21:38 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	size_t			i;

	if (n == 0)
		return (0);
	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_1[i] != s_2[i])
			return (s_1[i] - s_2[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	str1[5] = "test";
// 	char	str2[5] = "test";
// 	char	str3[5] = "tesa";
// 	char	str4[5] = "tesz";
// 	size_t	n[4] = {4, 3, 2, 1};
// 	int		i;

// 	for (i = 0; i < 4; i++)
// 	{
// 		size_t len = n[i];
// 		int result_ft = ft_memcmp(str1, str2, len);
// 		int result_std = memcmp(str1, str2, len);

// 		printf("Test %d: Comparing '%s' and '%s' with 
// length %zu\n", i + 1, str1, str2, len);
// 		printf("ft_memcmp: %d\n", result_ft);
// 		printf("memcmp: %d\n", result_std);
// 		printf("Match: %s\n\n", ((result_ft == result_std) ? "Yes" : "No"));
// 	}

// 	for (i = 0; i < 4; i++)
// 	{
// 		size_t len = n[i];
// 		int result_ft = ft_memcmp(str3, str4, len);
// 		int result_std = memcmp(str3, str4, len);

// 		printf("Test %d: Comparing '%s' and '%s' with length %zu\n", i + 5, 
// str3, str4, len);
// 		printf("ft_memcmp: %d\n", result_ft);
// 		printf("memcmp: %d\n", result_std);
// 		printf("Match: %s\n\n", ((result_ft == result_std) ? "Yes" : "No"));
// 	}

// 	return (0);
// }