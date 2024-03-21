/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:28:19 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/18 21:03:58 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b] != '\0')
	{
		dest[a + b] = src [b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "there";
	char	dest[] = "Almost ";
	printf("%s", ft_strncat(dest, src, 8));
}
*/