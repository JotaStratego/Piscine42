/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:46:47 by javialva          #+#    #+#             */
/*   Updated: 2024/02/04 20:46:49 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_writing(int a)
{
	a += 48;
	write(1, &a, 1);
}

void	ft_commaspace(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_writing(i / 10);
			ft_writing(i % 10);
			write(1, " ", 1);
			ft_writing(j / 10);
			ft_writing(j % 10);
			if (i < 98)
				ft_commaspace();
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
