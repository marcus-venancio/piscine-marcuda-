/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:02:28 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/19 17:38:10 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char	*str, int	*ptr_x)
{
	int	x;
	int	count;

	x = 0;
	count = 1;
	while ((str[x] >= 9 && str[x] <= 13) || (str[x] == 32))
		x++;
	while (str[x] && (str[x] == 43 || str[x] == 45))
	{
		if (str[x] == 45)
			count *= -1;
		x++;
	}
	*ptr_x = x;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sinal;
	int	result;
	int	x;

	result = 0;
	sinal = whitespaces(str, &x);
	while (str[x] && str[x] >= 48 && str[x] <= 57)
	{
		result *= 10;
		result += str[x] - 48;
		x++;
	}
	result *= sinal;
	return (result);
}
/*
int	main(void)
{
	char	*s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}
*/