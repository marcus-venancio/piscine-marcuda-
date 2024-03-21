/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:51:00 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/18 18:26:25 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Piscine";
	char	dest[] = "We will win this ";
	printf("%s", ft_strcat(dest, src));
}
*/