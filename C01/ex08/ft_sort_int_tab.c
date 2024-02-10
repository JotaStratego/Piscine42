/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:20:31 by javialva          #+#    #+#             */
/*   Updated: 2024/02/10 11:05:10 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	stop;

	stop = 0;
	while (stop != size)
	{
		i = 1;
		while (i != size)
		{
			if (tab[i] < tab[i - 1])
			{
				swap = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = swap;
			}
			i++;
		}
		stop++;
	}
}

/*int	main(void)
{
	int	i;
	int array[10] = {1, 3, 4, 2, 0, -1, 10, 9, 8, 7};
	
	i = 0;
	while (i < 10)
	{
		if (!(i == 10))
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	i = 0;
	printf("\nTras usar la funcion ft_sort_int_tab:\n");
	ft_sort_int_tab(array, 10);
	while (i < 10)
	{
		if (!(i == 10))
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
