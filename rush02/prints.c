/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <miaghabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:53:38 by miaghabe          #+#    #+#             */
/*   Updated: 2025/12/14 14:08:46 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	print_string(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		write(1, &a[i++], 1);
	write(1, " ", 1);
}

void	print_char(char a, struct s_type *arr)
{
	char	p[2];

	p[0] = a;
	p[1] = '\0';
	print_value(p, arr);
}

void	print_pairs(char *a, struct s_type *arr)
{
	char	p[3];

	p[0] = a[0];
	p[2] = '\0';
	p[1] = a[1];
	if (a[1] == '0' || find_in_dict(p, arr) != 1)
	{
		p[1] = '0';
		print_value(p, arr);
		if (a[1] != '0')
			print_char(a[1], arr);
		return ;
	}
	p[1] = a[1];
	if (find_in_dict(p, arr) != 1)
		print_char(a[1], arr);
	else
		print_value(p, arr);
}

void	print_triples(char *b, struct s_type *arr)
{
	if (b[0] == '\0')
		return ;
	if (b[1] == '\0')
	{
		if (b[0] != '0')
			print_char(b[0], arr);
		return ;
	}
	if (b[2] == '\0')
	{
		print_pairs(b, arr);
		return ;
	}
	if (b[0] == '0' && b[1] == '0' && b[2] == '0')
		return ;
	if (b[0] != '0' && b[0] != ' ')
	{
		print_char(b[0], arr);
		print_value("100", arr);
	}
	if (b[1] != '0' && b[1] != ' ')
		print_pairs(b + 1, arr);
	else if (b[2] != '0')
		print_char(b[2], arr);
}

void	printer(char *a, struct s_type *arr)
{
	int		num_len;
	int		i;
	int		j;
	char	p[4];

	num_len = size_of(a);
	only_zero(a, num_len, arr);
	i = 0;
	while (num_len > 0)
	{
		j = 0;
		if (num_len % 3 != 0)
			while (j < num_len % 3)
				p[j++] = a[i++];
		else
			while (j < 3)
				p[j++] = a[i++];
		p[j] = '\0';
		print_triples(p, arr);
		look_for_value(num_len, p, arr);
		if (num_len % 3 != 0)
			num_len -= num_len % 3;
		else
			num_len -= 3;
	}
}
