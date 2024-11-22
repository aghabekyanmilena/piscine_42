/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:47:35 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/17 13:35:08 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	func(char v[])
{
	if (v[0] == '7' && v[1] == '8' && v[2] == '9')
	{
		write(1, v, 3);
	}
	else
	{
		write(1, v, 5);
	}
}

void	ft_print_comb(void)
{
	char	v[5];

	v[0] = '0';
	v[3] = ',';
	v[4] = ' ';
	while (v[0] <= '7')
	{
		v[1] = v[0] + 1;
		while (v[1] <= '8')
		{
			v[2] = v[1] + 1;
			while (v[2] <= '9')
			{
				func(v);
				v[2]++;
			}
			v[1]++;
		}
		v[0]++;
	}
}
/*int main()
{
	ft_print_comb();
	return 0;
}*/