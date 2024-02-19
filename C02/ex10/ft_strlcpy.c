/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:15:01 by javialva          #+#    #+#             */
/*   Updated: 2024/02/19 08:58:30 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while ((src[i] != '\0') && (i <= size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/*int	main(void)
{
	char	*src;
	char	dest[20];

	src = "hola buenos dias, hoy me siento bien";
	printf("%d", ft_strlcpy(dest, src, 14));	
	return (0);
}*/
