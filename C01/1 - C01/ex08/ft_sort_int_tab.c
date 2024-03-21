/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:04:46 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/10 14:36:22 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab [x];
				tab[x] = tab [x + 1];
				tab [x + 1] = swap;
			}
			x++;
		}
		size--;
	}
}

/*
int	main(void)
{
	int	tab[6] = {7, 6, 4, 2, 3, 5};
	int	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", 
		tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/