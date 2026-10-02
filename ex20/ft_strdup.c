/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:59:19 by dmeyer            #+#    #+#             */
/*   Updated: 2026/10/01 19:38:12 by dmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(res, src);
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	char 	*a = "hola tal";
// 	char *b = ft_strdup(a);
// 	printf("this is dest: %s \n", b);
// 	// free(b);
// 	return (0);
// }