/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 07:59:48 by javialva          #+#    #+#             */
/*   Updated: 2024/02/08 07:59:50 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int start, int n)
{
	int	i;

	if (n <= 0 && n >= 10)
	{
		return ;
	}
	i = start + 1;
	while (i < 10)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		ft_comb(i, n - 1);
	}
}

void	ft_print_combn(int n)
{
	ft_comb(0, n);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 1;
	c = 6;
	d = 9;
	ft_print_combn(a);
	write(1, "\n", 1);
	ft_print_combn(b);
	write(1, "\n", 1);
	ft_print_combn(c);
	write(1, "\n", 1);
	ft_print_combn(d);
}
