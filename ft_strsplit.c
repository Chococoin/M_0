/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:11:53 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:17:52 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words_and_allocate(char const *s, char c, char ***bffr)
{
	int			nwords;
	int			isword;

	nwords = 0;
	isword = 0;
	while (*s)
	{
		if (*s != c && !isword)
		{
			isword = 1;
			nwords++;
		}
		else if (*s == c && isword)
			isword = 0;
		s++;
	}
	*bffr = malloc(sizeof(char *) * (nwords + 1));
	if (!*bffr)
		return (-1);
	(*bffr)[nwords] = NULL;
	return (nwords);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char		*dup;

	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, n);
	dup[n] = '\0';
	return (dup);
}

static void	ft_free_buffer(char **bffr, int i)
{
	while (i > 0)
		free(bffr[--i]);
	free(bffr);
}

static char	**ft_fill_buffer(char const *s, char c, char **bffr)
{
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			bffr[i] = ft_strndup(start, s - start);
			if (!bffr[i])
			{
				ft_free_buffer(bffr, i);
				return (NULL);
			}
			i++;
		}
	}
	return (bffr);
}

char	**ft_split(char const *s, char c)
{
	int			nwords;
	char		**bffr;

	if (!s)
		return (NULL);
	nwords = ft_count_words_and_allocate(s, c, &bffr);
	if (nwords == -1 || !bffr)
		return (NULL);
	if (!ft_fill_buffer(s, c, bffr))
		return (NULL);
	return (bffr);
}

// int	main(void)
// {
// 	char	*test_strs[] = {
// 		"Hello world this is a test",
// 		",,Another,,,test,string,with,commas,,,",
// 		"   Leading and trailing spaces   ",
// 		"SingleWord",
// 		"",
// 		"   ",
// 		"Multiple   spaces   between   words",
// 		NULL
// 	};
// 	char	delimiters[] = {' ', ',', ' ', ' ', ' ', ' ', ' '};
// 	int		i;
// 	char	**result;
// 	int		j;

// 	for (i = 0; test_strs[i] != NULL; i++)
// 	{
// 		printf("Test %d: String \"%s\" with delimiter '%c'\n", i + 
// 1, test_strs[i], delimiters[i]);
// 		result = ft_split(test_strs[i], delimiters[i]);
// 		if (result)
// 		{
// 			for (j = 0; result[j] != NULL; j++)
// 			{
// 				printf("result[%d]: \"%s\"\n", j, result[j]);
// 				free(result[j]);
// 			}
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("Error: ft_split returned NULL\n");
// 		}
// 		printf("\n");
// 	}
// 	return (0);
// }
