/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:58:13 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 12:55:42 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (size >= 1 && nmemb >= 1 && total_size == 0)
		return (NULL);
	if (nmemb == 0 || size == 0 || nmemb * size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

// int	main(void)
// {
// 	void	*ptr1;
// 	void	*ptr2;

// 	// Test case 1: nmemb = 0, size = 0
// 	ptr1 = ft_calloc(0, 0);
// 	ptr2 = calloc(0, 0);
// 	printf("Expected: %p\n", ptr2);
// 	printf("Result: %p\n", ptr1);
// 	printf("Test 1: %s\n\n", (ptr1 == ptr2) ? "Passed" : "Failed");
// 	free(ptr1);
// 	free(ptr2);

// 	// Test case 2: nmemb = 0, size = 1
// 	ptr1 = ft_calloc(0, 1);
// 	ptr2 = calloc(0, 1);
// 	printf("Expected: %p\n", ptr2);
// 	printf("Result: %p\n", ptr1);
// 	printf("Test 2: %s\n\n", (ptr1 == ptr2) ? "Passed" : "Failed");
// 	free(ptr1);
// 	free(ptr2);

// 	// Test case 3: nmemb = 1, size = 0
// 	ptr1 = ft_calloc(1, 0);
// 	ptr2 = calloc(1, 0);
// 	printf("Expected: %p\n", ptr2);
// 	printf("Result: %p\n", ptr1);
// 	printf("Test 3: %s\n\n", (ptr1 == ptr2) ? "Passed" : "Failed");
// 	free(ptr1);
// 	free(ptr2);

// 	// Test case 4: nmemb = 100, size = 100
// 	ptr1 = ft_calloc(100, 100);
// 	ptr2 = calloc(100, 100);
// 	printf("Expected: %p\n", ptr2);
// 	printf("Result: %p\n", ptr1);
// 	printf("Test 6: %s\n", (ptr1 && ptr2 && memcmp(ptr1,
// ptr2, 10000) == 0) ? "Passed" : "Failed");
// 	free(ptr1);
// 	free(ptr2);

// 	return (0);
// }
