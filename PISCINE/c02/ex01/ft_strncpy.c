/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:49:20 by gcarrico          #+#    #+#             */
/*   Updated: 2024/01/30 11:19:24 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char src[] = "hello";
	char dest[] = "world";
	char dest1[] = "world2";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", ft_strncpy(dest1, src, 7));
}*/