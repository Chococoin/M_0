/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:09:34 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:28:22 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char		dest1[20];
// 	char		dest2[20];
// 	const char	*src = "world";
// 	size_t		size = 15;
// 	size_t		result_ft;
// 	size_t		result_std;

// 	strcpy(dest1, "Hello ");
// 	strcpy(dest2, "Hello ");
// 	result_ft = ft_strlcat(dest1, src, size);
// 	result_std = ft_strlcat(dest2, src, size);

// 	printf("ft_strlcat: %s, return: %ld\n", dest1, result_ft);
// 	printf("strlcat: %s, return: %ld\n", dest2, result_std);
// 	printf("Match: %s\n", (result_ft == result_std && strcmp(dest1, dest2)
// == 0) ? "Yes" : "No");

// 	return (0);
// }
