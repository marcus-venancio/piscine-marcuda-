/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:03:16 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/18 19:09:50 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + a);
		a++;
		b = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "42 Network 1337 Piscine";
	char	find[] = "Piscine";
	printf("%s", ft_strstr(str, find));
}
*/