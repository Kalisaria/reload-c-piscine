/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:44:50 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/02 12:11:51 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		res = 0;
	else
	{
		if (nb == 0 || nb == 1)
			res = 1;
		else
		{
			res = nb;
			nb--;
			res = res * ft_recursive_factorial(nb);
			if (res < 0)
				res = 0;
		}
	}
	return (res);
}
// int main(void)
// {
// 	int a = 18;
// 	printf("el fatorial de %d es %d",a,ft_recursive_factorial(a));
// }
