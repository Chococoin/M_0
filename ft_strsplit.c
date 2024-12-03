/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:11:53 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/03 21:21:25 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int ft_count_words(char const *s, char c)
{
	int nwords = 0;
	int isword = 0;
	int i;
	int len;

	len = strlen(s);
	nwords = 0;
	isword = 0;
	i = 0;
	while(i < len)
	{	
		if (s[i] != c && !isword)
		{
			isword = 1;
			nwords++;
		}
		if (s[i] == c && isword)
		{
			isword = 0;
		}
		i++;
	}
	return (nwords);
}
static char **ft_copy_and_paste_words(char const *s, char c, const char **bffr)
{
	int i;
	char **buffer = bffr;
	while (s[i])
	{
		if (s[i] != c)
			printf("%c", s[i]);
		i++;
	}
	
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	int	nwords;
	char **buff;

	nwords = ft_count_words(s, c);
	printf("Num of word: %d\n", nwords);
	buff = (char **)malloc(sizeof(char) * (nwords + 1));
	if (!buff || nwords == 0)
		return (NULL);
	buff = ft_copy_and_paste_words(s, c, buff);
	return (buff);
}
int main()
{
	char *s1 = "---Hola--mundo---bello--hermoso.--";
	char c = '-';
	char **nwords = ft_split(s1, c);
	for (int i = 0; nwords[i] != NULL; i++) {
        printf("Word %d: %s\n", i, nwords[i]);
    }
	// char **result;
	// result = (char **)malloc((nwords + 1) * sizeof(char *));
	// int i = 0;
	// int start;
	// int j = 0;
	// while (s1[i])
	// {
	// 	while (s1[i] == c)
	// 		i++;
	// 	start = i;
	// 	while (s1[i] != c)
	// 		i++;
	// 	if (i > start)
	// 	{
	// 		result[j++] = 'a';
	// 	}
	// }
	return (0);
}