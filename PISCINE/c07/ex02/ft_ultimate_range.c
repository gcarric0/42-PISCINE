/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:36:20 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/15 14:13:03 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	buffer = malloc(size * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	return (size);
}

/* #include <stdio.h>

int	main(void)
{
	int min;
	int max;
	int *tab;
	int sizee;
	int i = 0;

	min = 5;
	max = 10;
	sizee = ft_ultimate_range(&tab, min, max);
	while (i < sizee)
	{
		printf("%d, ", tab[i]);
		i++;
	}
} */