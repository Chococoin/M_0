/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:14:27 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 18:39:16 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (s == NULL || fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char	*test_strings[5] = {"Hello, world!", "42", "", "Test str", NULL};
// 	int		i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		char *s = test_strings[i];
// 		printf("Test %d: String '%s'\n", i + 1, s ? s : "NULL");
// 		printf("ft_putendl_fd output:\n");
// 		ft_putendl_fd(s, 1);
// 		printf("\n");
// 	}

// 	return (0);
// }
