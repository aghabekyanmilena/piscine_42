/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <miaghabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:20:22 by miaghabe          #+#    #+#             */
/*   Updated: 2025/12/14 14:09:03 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*get_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] < '0' || str[i] > '9')
		i++;
	return (str + i);
}

int	only_int(char *a)
{
	int	i;
	int	r;
	int	len;

	r = 1;
	i = 0;
	while (a[i] && a[i] == ' ')
		i++;
	if (a[i] && a[i] == '+')
		i++;
	if (a[i] && a[i++] == '-')
		r = -1;
	len = i;
	while (a[i])
		if (a[i] > '9' || a[i++] < '0')
			return (-1);
	if (r == -1)
		print_string("minus");
	return (i - len);
}

int	valid_dict(char *filename)
{
	int		i;

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		print_string("Invalid Dict!!!");
		return (0);
	}
	else
		return (1);
}

void	only_zero(char *a, int len, struct s_type *arr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		count += a[i++] - 48;
		if (count != 0)
			return ;
	}
	print_char('0', arr);
}
