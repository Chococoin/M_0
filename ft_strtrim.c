/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:50:07 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/03 20:32:39 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && ft_is_in_set(s1[i], set))
		i++;
	return (i);
}

static int	ft_get_end(char const *s1, char const *set, int const start)
{
	int	len;

	len = ft_strlen(s1);
	while (len > start && ft_is_in_set(s1[len -1], set))
	{
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set, start);
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= (end -1))
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[end] = '\0';
	return (result);
}
