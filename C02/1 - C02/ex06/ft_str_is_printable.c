/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcuda- <marcuda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:27 by marcuda-          #+#    #+#             */
/*   Updated: 2024/03/14 13:07:12 by marcuda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	p;

	p = 0;
	if (str[p] == '\0')
	{
		return (1);
	}
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] > 126)
		{
			return (0);
		}
		p++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("ABC"));
	printf("%d", ft_str_is_printable("#$ asnaf\n"));
	printf("%d", ft_str_is_printable("Abc234%^&"));
	printf("%d", ft_str_is_printable("#$  %^&	&*"));
}
*/