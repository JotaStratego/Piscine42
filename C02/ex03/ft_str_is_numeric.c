/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:45:42 by javialva          #+#    #+#             */
/*   Updated: 2024/02/16 16:58:57 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*cad;
	char	*cadd;
	char	*caddd;

	cad = "01238213";
	cadd = "9080983jkji0808";
	caddd = "";
	printf("%d\n%d\n%d", ft_str_is_numeric(cad),
		ft_str_is_numeric(cadd), ft_str_is_numeric(caddd));
	return (0);
}*/
