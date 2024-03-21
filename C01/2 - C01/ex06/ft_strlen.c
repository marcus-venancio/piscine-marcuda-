/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:17:39 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/09 18:45:10 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write (1, &str[x], 1);
		x++;
	}
	return (x);
}

/*
int	main(void)
{
	char	*z = "Hello 42!";
	printf("%d", ft_strlen(z));
	return (0);
}
*/