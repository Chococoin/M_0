/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:30:58 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:30:34 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	value = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = value;
		n--;
		ptr++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	test_strs[5][20] = {"Hello, World!", "42 Network", "Libft", 
//"Test String", "Memset"};
// 	int		i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		char	ft_str[20];
// 		char	std_str[20];
// 		strcpy(ft_str, test_strs[i]);
// 		strcpy(std_str, test_strs[i]);

// 		ft_memset(ft_str, '*', 5);
// 		memset(std_str, '*', 5);

// 		printf("Test %d: Original '%s'\n", i + 1, test_strs[i]);
// 		printf("ft_memset: '%s'\n", ft_str);
// 		printf("memset: '%s'\n", std_str);
// 		printf("Match: %s\n\n", (strcmp(ft_str, std_str) == 0) ? "Yes" : "No");
// 	}

// 	return (0);
// }
