/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:44:06 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/10 19:40:38 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int	x = 10;
	int	y = 20;

	printf("Valores originais: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Valores trocados: x = %d, y = %d\n", x, y);
	return (0);
}
*/