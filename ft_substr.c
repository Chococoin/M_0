/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:40:25 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:20:50 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (0);
	i = 0;
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

// int	main(void)
// {
// 	char	*test_str = "Hello, World!";
// 	unsigned int	start_indices[5] = {0, 7, 13, 5, 20};
// 	size_t	lengths[5] = {5, 5, 5, 10, 5};
// 	char	*expected_results[5] = {"Hello", "World", "", ", World!", ""};
// 	int		i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		char *result = ft_substr(test_str, start_indices[i], lengths[i]);
// 		printf("Test %d: start = %u, len = %zu\n", i + 1, start_indices[i], 
// lengths[i]);
// 		printf("Result: '%s'\n", result);
// 		printf("Expected: '%s'\n", expected_results[i]);
// 		printf("Match: %s\n\n", (strcmp(result, expected_results[i]) == 0) ? 
// "Yes" : "No");
// 		free(result);
// 	}

// 	return (0);
// }