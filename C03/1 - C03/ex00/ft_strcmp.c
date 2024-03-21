/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:51:52 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/14 19:47:46 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && (s1[c] == s2[c]))
	{
		c++;
	}
	if (s1[c] == '\0' && s2[c] == '\0')
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}
/*
int	main(void)
{
	char	str1[] = "apple";
	char	str2[] = "banana";
	char	str3[] = "orange";

	printf("Comparing \"%s\" and \"%s\": %d\n", 
		str1, str2, ft_strcmp(str1, str2));
	printf("Comparing \"%s\" and \"%s\": %d\n", 
		str1, str3, ft_strcmp(str1, str3));
	return (0);
}
*/