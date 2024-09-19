/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:55:52 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/06 15:25:25 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	destlen;
	unsigned int	srclen;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	destlen = a;
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
	{
		return (srclen + size);
	}
	while (src[b] != '\0' && b < size - destlen - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (destlen + srclen);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "batata";
	char	dest[] = "ba";

	printf("%i \n", ft_strlcat(dest, src, 20));
	printf("%s \n", dest);
}*/
