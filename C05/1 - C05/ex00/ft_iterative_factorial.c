/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:51:39 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/19 21:55:16 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}
*/