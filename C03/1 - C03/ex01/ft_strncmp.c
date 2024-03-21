/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:24:49 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/18 18:04:16 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "banana";
	char	str2[] = "apple";
	char	str3[] = "orange";

	printf("Comparing \"%s\" and \"%s\" (up to 3 characters): %d\n", 
		str1, str2, ft_strncmp(str1, str2, 3));
	printf("Comparing \"%s\" and \"%s\" (up to 4 characters): %d\n", 
		str1, str3, ft_strncmp(str1, str3, 4));
	printf("Comparing \"%s\" and \"%s\" (up to 2 characters): %d\n", 
		str2, str3, ft_strncmp(str2, str3, 2));
	return (0);
}
*/