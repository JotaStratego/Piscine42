/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:06:38 by javialva          #+#    #+#             */
/*   Updated: 2024/02/09 09:06:41 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int	a;
	int	b;
	int	*pt1;
	int	*pt2;

	a = 10;
	b = 2;
	pt1 = &a;
	pt2 = &b;
	ft_ultimate_div_mod(pt1, pt2);
	printf("Div: %d, Mod: %d.", a, b);
	return (0);
}
