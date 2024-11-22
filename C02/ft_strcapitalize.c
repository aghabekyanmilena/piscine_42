/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:16:34 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/22 12:42:26 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	buff;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (str[i] >= 'a' && str[i] <= 'z')
			i--;
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9'))
		{
			buff = i;
			buff++;
			if (str[buff] && (str[buff] >= 'a' && str[buff] <= 'z'))
				str[buff] = str[buff] - 32;
		}
		i--;
	}
	return (str);
}
#include <stdio.h>

int main(void)
{
	char *str = NULL;
	printf("%s\n", ft_strcapitalize(str));
}
