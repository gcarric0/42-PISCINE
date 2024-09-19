/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:21:59 by gcarrico          #+#    #+#             */
/*   Updated: 2024/01/29 12:23:50 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	index;

	index = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = c;
		index++;
	}
}
