/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:31:55 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 17:32:12 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dest_ft[20];
// 	char	dest_std[20];
// 	int		size = 10;
// 	int		result_ft;
// 	int		result_std;

// 	result_ft = ft_strlcpy(dest_ft, src, size);
// 	result_std = ft_strlcpy(dest_std, src, size);

// 	printf("Source: '%s'\n", src);
// 	printf("Size: %d\n", size);
// 	printf("ft_strlcpy: '%s', Return: %d\n", dest_ft, result_ft);
// 	printf("strlcpy: '%s', Return: %d\n", dest_std, result_std);
// 	printf("Match: %s\n", (result_ft == result_std && 
// strcmp(dest_ft, dest_std) == 0) ? "Yes" : "No");
// 	return (0);
// }
