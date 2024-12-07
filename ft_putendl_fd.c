/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:14:27 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/07 22:42:19 by glugo-mu         ###   ########.fr       */
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
