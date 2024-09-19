/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:21:59 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/06 15:52:23 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	if (to_find[z] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + z] == to_find[z] && str[x + z] != '\0')
			z++;
		if (to_find[z] == '\0')
			return (str + x);
		x++;
		z = 0;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "quinta do tio manel";
	char to_find[] = "tio";
	printf("%s", ft_strstr(str, to_find));
}*/