/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:59:21 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/20 16:56:41 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	b = 1;
	while (b < argc)
	{
		a = 0;
		while (argv[b][a] != '\0')
		{
			ft_putchar(argv[b][a]);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}
