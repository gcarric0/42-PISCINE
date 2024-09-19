/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:57:16 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/06 15:51:00 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	z;

	x = 0;
	z = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (z < nb && src[z] != '\0')
	{
		dest[x + z] = src[z];
		z++;
	}
	dest[x + z] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "network";
	char dest[] = "aa";
	printf("%s", ft_strncat(dest, src, 6));
}*/
