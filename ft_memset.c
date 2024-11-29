/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:30:58 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/26 23:07:48 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void *s: A pointer to the starting address of the memory block to be filled.
// int c: The value to be set. This is passed as an int but is converted to an
// -> unsigned char when setting the memory.
// int n: The number of bytes to be set to the value c.
void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*ptr;
	unsigned char	value;

	value = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (--n >= 0)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}
