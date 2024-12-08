/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:50:07 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:24:51 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static int	ft_trim_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = ft_trim_start(s1, set);
	end = ft_trim_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	trimmed = malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 2);
	return (trimmed);
}

// int main(void)
// {
// 	const char *test_cases[] = {
// 		"  Hello World  ",
// 		"  Hello World",
// 		"Hello World  ",
// 		"Hello World",
// 		"NoTrimNeeded",
// 		""
// 	};
// 	const char *sets[] = {
// 		" ",
// 		" ",
// 		" ",
// 		" ",
// 		" ",
// 		" "
// 	};
// 	const char *expected_results[] = {
// 		"Hello World",
// 		"Hello World",
// 		"Hello World",
// 		"Hello World",
// 		"NoTrimNeeded",
// 		""
// 	};
// 	int i;
// 	char *result;

// 	for (i = 0; i < 5; i++)
// 	{
// 		result = ft_strtrim(test_cases[i], sets[i]);
// 		printf("Test %d:\n", i + 1);
// 		printf("Input: '%s', Set: '%s'\n", test_cases[i], sets[i]);
// 		printf("Expected: '%s'\n", expected_results[i]);
// 		printf("Result: '%s'\n", result);
// 		printf("Match: %s\n\n", (strcmp(result, expected_results[i]) == 0) ? 
// "Yes" : "No");
// 		free(result);
// 	}
// 	return 0;
// }