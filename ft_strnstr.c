/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:07:38 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/01 15:19:28 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			n;
	size_t			little_len;

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

