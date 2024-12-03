/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:17:12 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/03 11:40:12 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		len_s1;
	int		len_s2;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buffer = (char *)malloc(sizeof(char) * (len_s1 + len_s2 +1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		buffer[i] = s1[i];
		i++;
	}
	while (i - len_s1 < len_s1 + len_s2)
	{
		buffer[i] = s2[i - len_s1];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
