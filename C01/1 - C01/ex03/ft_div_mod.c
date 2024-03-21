/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:27:35 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/10 19:40:45 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a = 20;
	int	b = 3;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Resultado da divisao: %d\n", div);
	printf("Resto da divisao: %d\n", mod);
	return (0);
}
*/