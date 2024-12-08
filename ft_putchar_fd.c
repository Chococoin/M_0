/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:32:37 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:31:14 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
	else
		return ;
}

// int main(void)
// {
// 	int fd = 1;
// 	ft_putchar_fd('H', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('o', fd);
// 	ft_putchar_fd('\n', fd);
// 	return 0;
// }