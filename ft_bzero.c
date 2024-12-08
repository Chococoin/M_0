/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:53:42 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:37:02 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	range;
	char	*s1;

	range = 0;
	s1 = (char *)s;
	while (range < n)
	{
		s1[range] = '\0';
		range++;
	}
}

// int	main(void)
// {
// 	char	test1a[10] = "abcdefghi";
// 	char	test1b[10] = "abcdefghi";
// 	char	test2a[10] = "abcdefghi";
// 	char	test2b[10] = "abcdefghi";
// 	char	test3a[10] = "abcdefghi";
// 	char	test3b[10] = "abcdefghi";
// 	char	test4a[10] = "abcdefghi";
// 	char	test4b[10] = "abcdefghi";
// 	char	test5a[10] = "abcdefghi";
// 	char	test5b[10] = "abcdefghi";

// 	ft_bzero(test1a, 5);
// 	bzero(test1b, 5);
// 	printf("Test 1a: %s\n", test1a);
// 	printf("Test 1b: %s\n", test1b);

// 	ft_bzero(test2a, 0);
// 	bzero(test2b, 0);
// 	printf("(Expected) Test 2b: %s\n", test2b);
// 	printf("(Result) Test 2a : %s\n", test2a);

// 	ft_bzero(test3a, 9);
// 	bzero(test3b, 9);
// 	printf("(Expected) Test 3b: %s\n", test3b);
// 	printf("(Result) Test 3a : %s\n", test3a);

// 	ft_bzero(test4a, 1);
// 	bzero(test4b, 1);
// 	printf("(Expected) Test 4b: %s\n", test4b);
// 	printf("(Result) Test 4a : %s\n", test4a);

// 	ft_bzero(test5a, 10);
// 	bzero(test5b, 10);
// 	printf("(Expected) Test 5b: %s\n", test5b);
// 	printf("(Result) Test 5a : %s\n", test5a);

// 	return (0);
// }
