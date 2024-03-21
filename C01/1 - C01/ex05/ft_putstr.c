/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:37:05 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/10 14:03:49 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write (1, &str[x], 1);
		x++;
	}
}

/*
int	main(void)
{
	char	*z = "Hello 42!";
	ft_putstr(z);
}
*/