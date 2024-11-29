/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:53:42 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/25 22:43:23 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

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
