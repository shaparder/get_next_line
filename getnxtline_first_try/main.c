/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:07:27 by osfally           #+#    #+#             */
/*   Updated: 2018/12/13 03:44:00 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	char *line;

	if (argc != 2)
	{
		ft_putstr("argument error");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	close(fd);
	return (0);
}
