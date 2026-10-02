/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:46:24 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/02 10:47:45 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	leng;
	int	i;
	int	*res;

	if (min >= max)
		return (NULL);
	else
	{
		leng = max - min;
		res = malloc(sizeof(int) * leng);
		i = 0;
		while (min < max)
		{
			res[i] = min;
			min++;
			i++;
		}
		return (res);
	}
}
// #include <stdio.h>
// int main()
// {
// 	int *b;
// 	b = ft_range(5, 2);
// 	if (!b)
// 		return(printf("Se ha roto"), 1);
// 	while (*b)
// 	{
// 		printf("%d", *b);
// 		b++;
// 	}
// }