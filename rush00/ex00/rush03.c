/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:17:28 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/20 16:40:52 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int w, int h); // w = width h = heigth

void	test(int w)
{
	unsigned int	b;

	b = 1;
	while (b == 1)
	{
		ft_putchar('A');
		b++;
	}
	while (1 < b && b < w)
	{
		ft_putchar('B');
		b++;
	}
	while (b == w)
	{
		ft_putchar('C');
		b++;
	}
}

void	test2(int w)
{
	unsigned int	a;

	a = 1;
	while (a == 1)
	{
		ft_putchar('B');
		a++;
	}
	while (1 < a && a < w)
	{
		ft_putchar(' ');
		a++;
	}
	while (a == w)
	{
		ft_putchar('B');
		a++;
	}
}

void	test3(int w)
{
	unsigned int	c;

	c = 1;
	while (c == 1)
	{
		ft_putchar('A');
		c++;
	}
	while (1 < c && c < w)
	{
		ft_putchar('B');
		c++;
	}
	while (c == w)
	{
		ft_putchar('C');
		c++;
	}
}

void	rush(int w, int h)
{
	unsigned int	r;

	if (w <= 0 || h <= 0)
		return ;
	r = 1;
	while (r == 1)
	{
		test(w);
		ft_putchar('\n');
		r++;
	}
	while (1 < r && r < h)
	{
		test2(w);
		ft_putchar('\n');
		r++;
	}
	while (r == h)
	{
		test3(w);
		ft_putchar('\n');
		r++;
	}
}
