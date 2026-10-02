/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:10:23 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/01 03:49:34 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		ft_putchar(str[cont]);
		cont++;
	}
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main()
{
	char *a = "buenos días";

	ft_putstd(a);
}*/