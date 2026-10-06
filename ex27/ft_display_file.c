/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:23:31 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/06 23:21:21 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_read_write_file(int fd)
{
	char	buffer[42];
	int		cont;

	cont = 1;
	while (cont > 0)
	{
		cont = read(fd, buffer, 42);
		if (cont > 0)
			write(1, buffer, cont);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc <= 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ft_read_write_file(fd);
	close(fd);
	return (0);
}
