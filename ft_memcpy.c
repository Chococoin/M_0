/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:51:12 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 14:44:08 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dest || !src)
		return (NULL);
	s = (const char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[50] = "This is a test string for memcpy.";
// 	char	dest_ft[50];
// 	char	dest_std[50];
// 	size_t	n = strlen(src) + 1;

// 	ft_memcpy(dest_ft, src, n);
// 	memcpy(dest_std, src, n);

// 	printf("Source: %s\n", src);
// 	printf("ft_memcpy: %s\n", dest_ft);
// 	printf("memcpy: %s\n", dest_std);
// 	printf("Match: %s\n", (strcmp(dest_ft, dest_std) == 0) ? "Yes" : "No");

// 	return (0);
// }