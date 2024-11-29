/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:47:15 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/29 21:18:19 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
