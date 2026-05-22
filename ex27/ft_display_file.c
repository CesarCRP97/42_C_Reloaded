/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:20:10 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/22 14:58:30 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(char const *name)
{
	int		fd;
	char	buf[1];

	fd = open(name, O_RDONLY);
	while (read(fd, buf, sizeof(buf)))
	{
		write(1,buf,sizeof(buf));
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_file(argv[1]);
	else if(argc < 2)
		write(2, "File name missing.\n",19);
	else
		write(2, "aksdajd", 23);
	return (0);
}