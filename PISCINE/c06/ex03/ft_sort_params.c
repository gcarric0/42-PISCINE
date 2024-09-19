/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:20:41 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/10 11:17:22 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	x;
	int	z;

	x = 1;
	while (x < ac - 1)
	{
		z = 1;
		while (z < ac - 1)
		{
			if (ft_strcmp(av[z], av[z + 1]) > 0)
			{
				ft_swap(&av[z], &av[z + 1]);
			}
			z++;
		}
		x++;
	}
	z = 1;
	while (z < ac)
	{
		ft_putstr(av[z]);
		ft_putchar('\n');
		z++;
	}
	return (0);
}
