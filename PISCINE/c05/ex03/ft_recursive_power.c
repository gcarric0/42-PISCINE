/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:47:56 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/10 15:17:21 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (result);
}

/* 
int	main(void)
{
	printf("%i", ft_recursive_power(5, 3));
} */
