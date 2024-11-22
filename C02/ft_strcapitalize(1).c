/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:20 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/29 20:26:30 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (a && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (!a && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			a = 0;
		}
		else
			a = 1;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main() {
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s\n", ft_strcapitalize(str));
}*/
