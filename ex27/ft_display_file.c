/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:20:10 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/23 11:59:09 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(char const *name)
{
	int		fd;
	int		byte_read;
	char	buf[1];

	fd = open(name, O_RDONLY);
	if (fd < 0)
		write(2, "Cannot read file.\n", 18);
	else
	{
		byte_read = read(fd, buf, sizeof(buf));
		while (byte_read > 0)
		{
			write(1, buf, sizeof(buf));
			byte_read = read(fd, buf, sizeof(buf));
		}
		close(fd);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_file(argv[1]);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		write(2, "File name missing.\n", 19);
	return (0);
}
