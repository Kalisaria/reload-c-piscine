/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:19:48 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/01 04:32:37 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		result = 0;
	else
	{
		if (nb > 0)
		{
			while (nb >= 1)
			{
				result = result * nb;
				nb --;
			}
		}
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d /n", ft_iterative_factorial(0));
	printf("%d/n", ft_iterative_factorial(-1));
	printf("%d", ft_iterative_factorial(5));
}*/