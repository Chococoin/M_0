/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:45:08 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 19:30:12 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(str[i], fd);
}

// void	run_test(int n, const char *expected_output,
// const char *test_output_file) 
// {
// 	int fd = open(test_output_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
//  	{
// 		perror("open");
// 		exit(EXIT_FAILURE);
// 	}

// 	ft_putnbr_fd(n, fd);

// 	close(fd);

// 	FILE *file = fopen(test_output_file, "r");
// 	if (!file)
//  	{
// 		perror("fopen");
// 		exit(EXIT_FAILURE);
// 	}

//  	char buffer[1024];
//  	size_t bytesRead = fread(buffer, 1, sizeof(buffer) - 1, file);
//  	buffer[bytesRead] = '\0';
//  	fclose(file);

// 	if (strcmp(buffer, expected_output) == 0)
// 		printf("Test passed\n");
// 	else
// 		printf("Test failed\nExpected: %s\nGot: %s\n", 
// expected_output, buffer);
// }

// int main()
// {
// 	run_test(0, "0", "test01.output");
// 	return 0;
// }