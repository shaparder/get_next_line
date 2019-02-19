/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:34:35 by osfally           #+#    #+#             */
/*   Updated: 2018/12/14 15:05:29 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		security(const int fd, char **line, char **str)
{
	if (fd < -1 || fd > MAX_FD || line == NULL)
		return (-1);
	if (!*str)
		MACH(*str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1)), -1);
	return (0);
}


int		get_next_line(const int fd, char **line)
{
	static char		*str;
	char			*tmp;
	int				ret;
	char			buff[BUFF_SIZE + 1];
	int				i;

	if (security(fd, line, &str) == -1)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(str, buff);
		free()
	}
	i = 0;
	if (str[i])
	{
		while(str[i] && str[i] != '\n')
			i++;
			if (i == 0)
				(*line) = ft_strdup("");
			else
			{
				(*line) = ft_strsub(str, 0, i);
				str = &str[i + 1];
			}
			return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
