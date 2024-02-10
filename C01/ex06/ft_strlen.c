/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:17:14 by javialva          #+#    #+#             */
/*   Updated: 2024/02/09 12:17:16 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	*v;

	v = "Hola mundo!";
	printf("El nº de caracteres de la cadena de texto es: %d", ft_strlen(v));
	return (0);
}*/
