/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:56:11 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/19 21:59:19 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb -1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(9));
}
