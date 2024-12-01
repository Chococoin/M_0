/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:30:58 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/01 16:03:58 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	value = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (--n >= 0)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}
