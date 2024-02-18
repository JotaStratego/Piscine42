/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:15:01 by javialva          #+#    #+#             */
/*   Updated: 2024/02/18 12:23:42 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char		c;
	int		i;
	int		new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new == 1 && (c >= 'a' && c <= 'z'))
			str[i] = str[i] - 32;
		else if (new == 0 && (c >= 'A' && c <= 'Z'))
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a')
			|| c > 'z')
			new = 1;
		else
			new = 0;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "hOlA mUUUy 54buenas-noches+espana";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
