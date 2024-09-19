/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:06:06 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/12 14:51:08 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	errorcheck(char *str)
{
	int	a;
	int	i;
	int	b;

	a = ft_strlen(str);
	i = 0;
	if (str[i] == '\0' || a <= 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		b = i + 1;
		while (b < a)
		{
			if (str[i] == str[b])
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	error;
	int	nb;

	error = errorcheck(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

/* #include <stdio.h>

int	main(void)
{
	ft_putnbr_base(2, "01");
	printf("\n");
	ft_putnbr_base(40, "01234567");
	printf("\n");
	ft_putnbr_base(69, "0123456789");
	printf("\n");
	ft_putnbr_base(50, "0123456789abcdef");
} */
