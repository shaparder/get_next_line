/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pas main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:07:27 by osfally           #+#    #+#             */
/*   Updated: 2018/12/15 02:12:41 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft_shp/libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char *line;

	if (argc != 2)
		return (1);
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%i | %s\n", ret, line);
		ft_strdel(&line);
	}
	printf("%i | %s", ret, line);
	system("leaks a.out");
	close(fd);
	return (0);
}
