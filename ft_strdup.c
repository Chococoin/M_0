/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:53:57 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:25:39 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	const char	*test_strings[5] = {"Hello", "World", "", "42", "Libft"};
// 	int			i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		const char *s = test_strings[i];
// 		char *result_ft = ft_strdup(s);
// 		char *result_std = strdup(s);

// 		printf("Test %d: String \"%s\"\n", i + 1, s);
// 		printf("ft_strdup: \"%s\"\n", result_ft);
// 		printf("strdup: \"%s\"\n", result_std);
// 		printf("Match: %s\n\n", (strcmp(result_ft, result_std) == 0) ? 
// "Yes" : "No");

// 		free(result_ft);
// 		free(result_std);
// 	}

// 	return (0);
// }
