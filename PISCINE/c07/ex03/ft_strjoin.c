/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:06:45 by gcarrico          #+#    #+#             */
/*   Updated: 2024/02/15 20:08:39 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
		count++;
	return (count);
}

int	count_char(int size, char **strs)
{
	int	count1;
	int	count2;
	int	total_char;

	total_char = 0;
	count1 = 0;
	while (count1 < size)
	{
		count2 = 0;
		while (strs[count1][count2] != 0)
		{
			total_char++;
			count2++;
		}
		count1++;
	}
	return (total_char);
}

void	ft_strcpy(int pos, char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s2[count] != 0)
	{
		s1[pos] = s2[count];
		count++;
		pos++;
	}
}

char	*ft_empty_string(void)
{
	char	*str;

	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count1;
	int		count2;
	char	*str;

	if (size == 0)
		return (ft_empty_string());
	str = malloc(count_char(size, strs) + ((size - 1) * str_len(sep)) + 1);
	if (!str)
		return (NULL);
	count1 = 0;
	count2 = 0;
	while (count1 < size)
	{
		ft_strcpy(count2, str, strs[count1]);
		count2 += str_len(strs[count1]);
		if (count1 < (size - 1))
		{
			ft_strcpy(count2, str, sep);
			count2 += str_len(sep);
		}
		count1++;
	}
	str[count2] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char **strs;
	char *separator;
	char *result;
	int size;
	size = 3;
	strs = malloc(3);
	strs[0] = "Im";
	strs[1] = "Very";
	strs[2] = "Happy";
	separator = " balls ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
	result = NULL;
}*/
