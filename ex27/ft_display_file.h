/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 20:27:17 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/06 23:21:06 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_read_write_file(int fd);

#endif