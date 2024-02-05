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

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10 + '0';
		write(1, &nbr, 1);
	}
}

/*int	main(void)
{
	int	c;
	int	d;
	int	e;
	int	f;

	c = 241587;
	d = -50015;
	e = -2147483647;
	f = -2147483648;
	ft_putnbr(f);
	write(1, "\n", 1);
	ft_putnbr(c);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
	ft_putnbr(e);
	return (0);
}*/
