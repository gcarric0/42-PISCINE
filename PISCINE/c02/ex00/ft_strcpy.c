/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:38:27 by gcarrico          #+#    #+#             */
/*   Updated: 2024/01/29 16:18:34 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	src[] = "hello";
	char	src1[] = "hello";
	char	dest[] = "balls";
	char	dest1[] = "balls";

	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src1));
}*/
