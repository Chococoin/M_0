/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:11:53 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/03 22:59:30 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	nwords;
	int	isword;
	int	i;
	int	len;

	len = strlen(s);
	nwords = 0;
	isword = 0;
	i = 0;
	while (i < len)
	{
		if (s[i] != c && !isword)
		{
			isword = 1;
			nwords++;
		}
		if (s[i] == c && isword)
			isword = 0;
		i++;
	}
	return (nwords);
}

static char	**ft_copy_and_paste_words(char const *s, char c, char **bffr)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			bffr[j] = ft_strdup(&s[start]);
			if (!bffr[j])
				return (NULL);
			bffr[j][i - start] = '\0';
			j++;
		}
	}
	bffr[j] = NULL;
	return (bffr);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**buff;

	nwords = ft_count_words(s, c);
	buff = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (!buff)
		return (NULL);
	if (nwords == 0)
	{
		buff[0] = ft_strdup("");
		buff[1] = NULL;
		return (buff);
	}
	buff = ft_copy_and_paste_words(s, c, buff);
	return (buff);
}

// int	main()
// {
// 	char *s1 = "               ";
// 	char c = ' ';
// 	char **nwords = ft_split(s1, c);
// 	for (int i = 0; nwords[i] != NULL; i++) {
// 		printf("Word %d: %s\n", i, nwords[i]);
// 	}
// 	return (0);
// }