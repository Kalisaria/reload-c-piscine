/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:19:48 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/06 22:48:19 by dmeyer           ###   ########.fr       */
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
				if (result < 0)
					result = 0;
			}
		}
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d", ft_iterative_factorial(30));
}*/