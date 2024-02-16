/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:49:12 by javialva          #+#    #+#             */
/*   Updated: 2024/02/16 10:37:57 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90)
			&& (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*string;
	char	*str;
	char	*str2;

	string = "lkaAdfa";
	str = "a d s f a s d f ";
	str2 = "";
	printf("%d\n", ft_str_is_alpha(string));
	printf("%d\n", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str2));
	return (0);
}*/
