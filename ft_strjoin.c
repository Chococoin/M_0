/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:17:12 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 17:06:29 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freemem(char *bffr, int j)
{
	free((void *)&bffr[j]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buffer = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 2));
	if (!buffer)
	{
		ft_freemem(buffer, (len_s1 + len_s2));
		return (NULL);
	}
	ft_strlcpy(buffer, s1, len_s1 + 1);
	ft_strlcat(buffer, s2, (len_s1 + len_s2 + 1));
	return (buffer);
}

// int main(void)
// {
// 	char *test_cases[5][2] = {
// 		{"Hello, ", "world!"},
// 		{"42", "Madrid"},
// 		{"", "Empty"},
// 		{"Non-empty", ""},
// 		{"Both", "Empty"}
// 	};
// 	int i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		char *s1 = test_cases[i][0];
// 		char *s2 = test_cases[i][1];
// 		char *result_ft = ft_strjoin(s1, s2);

// 		// Asignar suficiente memoria para strcat
// 		char *result_std = (char *)malloc(strlen(s1) + strlen(s2) + 1);
// 		if (!result_std)
// 		{
// 			free(result_ft);
// 			continue;
// 		}
// 		strcpy(result_std, s1);
// 		strcat(result_std, s2);

// 		printf("Test %d: s1 = '%s', s2 = '%s'\n", i + 1, s1, s2);
// 		printf("ft_strjoin: '%s'\n", result_ft);
// 		printf("strcat: '%s'\n", result_std);
// 		printf("Match: %s\n\n", (strcmp(result_ft, result_std) == 0) ? 
// "Yes" : "No");

// 		free(result_ft);
// 		free(result_std);
// 	}

// 	return (0);
// }
