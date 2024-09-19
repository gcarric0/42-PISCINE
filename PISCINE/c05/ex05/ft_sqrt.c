/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:28:46 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/12 12:45:44 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	x;

	x = nb;
	if (x <= 0)
	{
		return (0);
	}
	if (x == 1)
		return (1);
	i = 2;
	if (x >= 2)
	{
		while (i * i <= x)
		{
			if (i * i == x)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("sqrt of %d is %d", 234304249, ft_sqrt(234304249));
	return(0);
} */
