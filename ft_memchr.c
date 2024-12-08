/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:52:30 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 14:39:23 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[] = "Hello, world!";
// 	const char	chars_to_find[] = {'o', 'w', 'z', 'H', '!'};
// 	int			i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		char c = chars_to_find[i];
// 		void *result_ft = ft_memchr(str, c, strlen(str));
// 		void *result_std = memchr(str, c, strlen(str));

// 		printf("Test %d: Character '%c'\n", i + 1, c);
// 		printf("ft_memchr: %s\n", result_ft ? (char *)result_ft : "NULL");
// 		printf("memchr: %s\n", result_std ? (char *)result_std : "NULL");
// 		printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");
// 	}

// 	return (0);
// }