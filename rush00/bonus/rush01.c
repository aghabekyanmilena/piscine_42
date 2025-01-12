/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:54:55 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/20 16:41:35 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int w, int h); // w = width y = heigth

void	test(int w)
{
	unsigned int	b;

	b = 1;
	while (b == 1)
	{
		ft_putchar('/');
		b++;
	}
	while (1 < b && b < w)
	{
		ft_putchar('*');
		b++;
	}
	while (b == w)
	{
		ft_putchar('\\');
		b++;
	}
}

void	test2(int w)
{
	unsigned int	a;

	a = 1;
	while (a == 1)
	{
		ft_putchar('*');
		a++;
	}
	while (1 < a && a < w)
	{
		ft_putchar(' ');
		a++;
	}
	while (a == w)
	{
		ft_putchar('*');
		a++;
	}
}

void	test3(int w)
{
	unsigned int	c;

	c = 1;
	while (c == 1)
	{
		ft_putchar('\\');
		c++;
	}
	while (1 < c && c < w)
	{
		ft_putchar('*');
		c++;
	}
	while (c == w)
	{
		ft_putchar('/');
		c++;
	}
}

void	rush(int w, int h)
{
	unsigned int	r;

	if (w <= 0 || h <= 0)
		return ;
	r = 1;
	test(w);
	ft_putchar('\n');
	while (r < h - 1)
	{
		test2(w);
		ft_putchar('\n');
		r++;
	}
	if (h > 1)
	{
		test3(w);
		ft_putchar('\n');
	}
}
