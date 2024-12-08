/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:07:38 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:28:04 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!little[0])
		return ((char *)&big[0]);
	i = 0;
	while (i + little_len <= len && big[i])
	{
		if (big[i] == little[0])
		{
			n = 0;
			while (n <= little_len && big[i + n] == little[n])
				n++;
			if (n == little_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big = "Hello, this is a simple string for testing.";
// 	const char	*little = "simple";
// 	const char	*little_not_found = "complex";
// 	size_t		len = 30;

// 	char	*result_ft;
// 	char	*result_std;

// 	result_ft = ft_strnstr(big, little, len);
// 	result_std = ft_strnstr(big, little, len);
// 	printf("Test 1: Searching '%s' in '%s' within first %zu characters\n",
// little, big, len);
// 	printf("ft_strnstr: %s\n", result_ft);
// 	printf("strnstr: %s\n", result_std);
// 	printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");

// 	result_ft = ft_strnstr(big, little_not_found, len);
// 	result_std = ft_strnstr(big, little_not_found, len);
// 	printf("Test 2: Searching '%s' in '%s' within first %zu characters\n", 
// little_not_found, big, len);
// 	printf("ft_strnstr: %s\n", result_ft);
// 	printf("strnstr: %s\n", result_std);
// 	printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");

// 	return (0);
// }