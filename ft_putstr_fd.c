/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:47:59 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/07 17:57:26 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
// #include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	len;
	if (s == NULL || fd < 0)
		return ;
	
	len = ft_strlen(s);
	write(fd, s, len);
}

// int	main(void)
// {
//     int	fd;
//     fd = open("output1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0)
//     {
//         return (1);
//     }
//     ft_putstr_fd("Hello, World!\n", fd);
//     close(fd);
//     return (0);
// }