/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:29:11 by javialva          #+#    #+#             */
/*   Updated: 2024/03/11 18:31:28 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	lentotal;
	unsigned int	i;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (size <= lendest)
		lentotal = size + lensrc;
	else
		lentotal = lendest + lensrc;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[lendest] = src[i];
		lendest++;
		i++;
	}
	dest[lendest] = '\0';
	return (lentotal);
}
