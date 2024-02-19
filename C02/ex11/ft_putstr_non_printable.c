/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:31:14 by javialva          #+#    #+#             */
/*   Updated: 2024/02/19 10:50:24 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conversor_hexadecimal(char c)
{
	char	*hexbase;

	hexbase = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexbase[c / 16]);
		ft_putchar(hexbase[c / 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexbase[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_conversor_hexadecimal(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	*string;

	string = "Hola\tcocacola\n";
	ft_putstr_non_printable(string);
}*/
