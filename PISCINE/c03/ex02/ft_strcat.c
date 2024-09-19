/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:53:58 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/06 15:27:03 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "piscine42";
	char dest[] = "2024";
	printf("%s", ft_strcat(dest, src));
}*/
