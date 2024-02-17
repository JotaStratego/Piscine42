/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:15:01 by javialva          #+#    #+#             */
/*   Updated: 2024/02/17 10:15:07 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (((str[i - 1] >= 20 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 100)
			|| (str[i - 1] >= 123 && str[i - 1] <= 126))
			&& (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if ((str[i - 1] >= 97 && str[i - 1] <= 122)
			&& (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	cadena[] = "hola de 34edades para !aRRiba! no 42me Gusta";

	printf("%s", ft_strcapitalize(cadena));
	return (0);
}
