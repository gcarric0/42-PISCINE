/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:18:56 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/15 17:48:06 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	count;

	if (min >= max)
		return (0);
	count = 0;
	ptr = (int *)malloc((max - min) * 4);
	while (min < max)
	{
		*(ptr + count) = min;
		min++;
		count++;
	}
	return (ptr);
}

/* int	main(void)
{
	int min;
	int max;
	int *myarray;
	int count = 0;
	int size;
	min = 5;
	max = 7;
	size = max - min;
	myarray = ft_range(min, max);
	while(count < size)
	{
		printf("%d ", myarray[count]);
		count++;
	}
	free(myarray);
	myarray = NULL;
} */
