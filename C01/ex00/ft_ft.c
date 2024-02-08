/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 08:27:47 by javialva          #+#    #+#             */
/*   Updated: 2024/02/08 08:27:49 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	int	b;

	b = 42;
	*nbr = b;
}

/*int	main(void)
{
	int	a;
	int *ptr;
	
	a = 50;
	ptr = &a;
	printf("Antes de ft_ft: %d",*ptr);
	ft_ft(ptr);
	printf("\n");
	printf("Despues de ft_ft: %d",*ptr);
	return (0);
}*/
