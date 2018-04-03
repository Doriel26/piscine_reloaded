/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:47:30 by dchiche           #+#    #+#             */
/*   Updated: 2017/11/08 12:28:14 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	char	buf[501];
	int		len;

	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else
	{
		fd = open(av[1], O_RDONLY);
		while ((len = read(fd, buf, 500)))
			write(1, buf, len);
		write(1, buf, len);
		close(fd);
	}
	return (0);
}
