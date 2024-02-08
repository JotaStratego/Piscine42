/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:33:34 by javialva          #+#    #+#             */
/*   Updated: 2024/02/08 20:33:36 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pnt1;
	int	*pnt2;

	a = 42;
	b = 50;
	pnt1 = &a;
	pnt2 = &b;
	printf("El valor de a: %d y el valor de b es: %d\n", *pnt1, *pnt2);
	ft_swap(pnt1, pnt2);
	printf("Ahora el valor a es: %d y el valor b es: %d.", *pnt1, *pnt2);
	return (0);
}*/
