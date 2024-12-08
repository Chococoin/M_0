/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:45:08 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 11:15:02 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*char_integer;

	if (!n || !fd)
		return ;
	if (n == -2147483648)
	{
		char_integer = (char *)malloc(12);
		if (!char_integer)
			return ;
		ft_strlcpy(char_integer, "-2147483648", 12);
	}
	else if (n == 0)
	{
		char_integer = (char *)malloc(2);
		if (!char_integer)
			return ;
		ft_strlcpy(char_integer, "0", 2);
	}
	else
		char_integer = (char *)ft_itoa(n);
	if (!char_integer)
		return ;
	write(fd, char_integer, ft_strlen(char_integer));
	free(char_integer);
}
void run_test(int n, const char *expected_output, const char *test_output_file) {
	int fd = open(test_output_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		perror("open");
		exit(EXIT_FAILURE);
	}

	ft_putnbr_fd(n, fd);

	close(fd);

	// Compare the output with the expected result
	FILE *file = fopen(test_output_file, "r");
	if (!file) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	char buffer[1024];
	fread(buffer, 1, sizeof(buffer) - 1, file);
	buffer[sizeof(buffer) - 1] = '\0';
	fclose(file);

	if (strcmp(buffer, expected_output) == 0) {
		printf("Test passed\n");
	} else {
		printf("Test failed\nExpected: %s\nGot: %s\n", expected_output, buffer);
	}
}

int main() {
	run_test(0, "0", "test01.output");
	return 0;
}