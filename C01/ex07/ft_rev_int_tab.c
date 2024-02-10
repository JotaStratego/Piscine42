/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:23:40 by javialva          #+#    #+#             */
/*   Updated: 2024/02/09 12:23:42 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	z;

	i = 0;
	z = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[z];
		tab[z] = swap;
		i++;
		z--;
	}
}

/*int	main(void)
{
	int	array[6];
	int	i;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	array[5] = 6;
	i = 0;
	while (i != 6)
	{
		if (!(i == 5))
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	i = 0;
	ft_rev_int_tab(array, 6);
	printf("\nTras utilizar la funcion ft_rev_int_tab, el array queda:\n");
	while (i != 6)
	{
		if (!(i == 5))
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
