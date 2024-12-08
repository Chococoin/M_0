/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:47:15 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:51:37 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos_s;

	pos_s = NULL;
	while (*s)
	{
		if (*s == (char)c)
			pos_s = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (pos_s);
}

// int	main(void)
// {
// 	char	str1[] = "Hello, world!";
// 	char	str2[] = "42 Madrid";
// 	char	str3[] = "Test string with multiple 't' characters";
// 	char	*result;

// 	result = ft_strrchr(str1, 'o');
// 	if (result)
// 		printf("Test 1 Passed: %s\n", result);
// 	else
// 		printf("Test 1 Failed\n");

// 	result = ft_strrchr(str2, '4');
// 	if (result)
// 		printf("Test 2 Passed: %s\n", result);
// 	else
// 		printf("Test 2 Failed\n");

// 	result = ft_strrchr(str3, 't');
// 	if (result)
// 		printf("Test 3 Passed: %s\n", result);
// 	else
// 		printf("Test 3 Failed\n");

// 	result = ft_strrchr(str1, 'z');
// 	if (result)
// 		printf("Test 4 Failed\n");
// 	else
// 		printf("Test 4 Passed\n");

// 	result = ft_strrchr(str1, '\0');
// 	if (result)
// 		printf("Test 5 Passed %s\n", result);
// 	else
// 		printf("Test 5 Failed\n");

// 	return (0);
// }
