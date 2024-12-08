/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:30:43 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:38:21 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char  *test_strings[5] = {
// 		"Hello, world!",
// 		"42 is the answer",
// 		"This is a test string",
// 		"Another example",
// 		""
// 	};
// 	char        test_chars[5] = {'o', '4', 't', 'e', '\0'};
// 	int         i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		const char  *str = test_strings[i];
// 		char        c = test_chars[i];
// 		char        *result_ft = ft_strchr(str, c);
// 		char        *result_std = strchr(str, c);

// 		printf("Test %d: String \"%s\", Character '%c'\n", i + 1, str, c);
// 		printf("ft_strchr: %s\n", result_ft ? result_ft : "NULL");
// 		printf("strchr: %s\n", result_std ? result_std : "NULL");
// 		printf("Match: %s\n\n", (result_ft == result_std) ? "Yes" : "No");
// 	}

// 	return (0);
// }
