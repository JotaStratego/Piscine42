/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:03:56 by javialva          #+#    #+#             */
/*   Updated: 2024/02/04 23:03:59 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_decimals(int nbr)
{
	int	dec;
	int units;

	dec = (nbr / 10) + '0';
	units = (nbr % 10) + '0';
	write(1, &dec, 1);
	write(1, &units, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	
	if (nbr < 0 && nbr > -2147483648)
	{
		write(1, "-", 1);
		nbr *= -1;
	}

	if (nbr >= 0 && nbr < 10)
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
	else
	{
		while (nbr > 10)
		{
			ft_decimals(nbr);
			nbr = nbr / 10;
		}
	}
}
	

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int e;

	a = 1;
	b = 11;
	c = 1111;
	d = -111;
	e = -2147483648;


	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_putnbr(c);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
	ft_putnbr(e);
	return (0);
}
