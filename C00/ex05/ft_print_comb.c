/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:54:49 by javialva          #+#    #+#             */
/*   Updated: 2024/01/31 09:54:51 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comaspace(void)
{
	char	coma;
	char	space;

	space = ' ';
	coma = ',';
	write(1, &coma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	char	n;
	char	i;
	char	j;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			j = i + 1;
			while (j <= '9')
			{
				write(1, &n, 1);
				write(1, &i, 1);
				write(1, &j, 1);
				if (!(n == '7' && i == '8' && j == '9'))
					ft_comaspace();
				j++;
			}
			i++;
		}
		n++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
