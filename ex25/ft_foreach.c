/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:50:22 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/06 22:31:02 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		nb = (nb % 10) + '0';
		write(1, &nb, 1);
	}
		
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int main()
{
	int tab[5] = {2, 3, 4, 6, 13} ;
	ft_foreach(tab, 5, ft_putnbr);
	return 0;
}*/