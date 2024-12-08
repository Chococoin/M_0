/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:26:51 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 14:46:47 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[50] = "This is the source string.";
// 	char	dest_ft[50];
// 	char	dest_std[50];
// 	size_t	n = 20;

// 	ft_memmove(dest_ft, src, n);
// 	memmove(dest_std, src, n);

// 	printf("Source: %s\n", src);
// 	printf("ft_memmove: %s\n", dest_ft);
// 	printf("memmove: %s\n", dest_std);
// 	printf("Match: %s\n", (strcmp(dest_ft, dest_std) == 0) ? "Yes" : "No");

// 	return (0);
// }