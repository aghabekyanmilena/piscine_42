/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:52:38 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/03 16:52:43 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	get_from_dict(char *m, struct s_type *arr)
{
	int	z[3];

	z[0] = 0;
	z[1] = 0;
	z[2] = 0;
	while (m[z[0]] != '\n' && m[z[0]] != '\0')
	{
		if (m[z[0]] == ':')
			z[2] = 1;
		if (z[2] == 0)
			arr[0].key[z[0]] = m[z[0]];
		if (z[2] == 1 && z[2]++)
			arr[0].key[z[0]++] = '\0';
		if (z[2] == 2)
		{
			while (m[z[0]] == ' ')
				z[0]++;
			arr[0].value[z[1]++] = m[z[0]];
		}
		z[0]++;
	}
	arr[0].value[z[1]] = '\0';
}

void	key_value(char *m, struct s_type *arr)
{
	int	p[4];

	p[1] = -1;
	p[3] = 1;
	get_from_dict(m, arr);
	while (m[++p[1]] != '\0')
	{
		if (m[p[1]] != '\n')
		{
			p[2] = 0;
			while (m[p[1]] != ':' && m[p[1]] != ' ' && m[p[1]] != '\0')
				arr[p[3]].key[p[2]++] = m[p[1]++];
			while (m[p[1]] == ' ' || m[p[1]] == ':')
				p[1]++;
			p[2] = 0;
			while (m[p[1]] != '\n' && m[p[1]] != '\0')
				arr[p[3]].value[p[2]++] = m[p[1]++];
			arr[p[3]++].value[p[2]] = '\0';
		}
		else
			p[1]++;
	}
}

struct s_type	*m_allocation(char *filename)
{
	struct s_type	*arr;
	char			*m;
	int				i;
	int				k;

	arr = (struct s_type *)malloc(sizeof (struct s_type) * 100);
	m = open_file(filename);
	i = -1;
	while (++i < 100)
	{
		arr[i].key = (char *)malloc(sizeof (char) * 100);
		arr[i].value = (char *)malloc(sizeof (char) * 100);
		k = -1;
		while (++k < 100)
		{
			arr[i].key[k] = '\0';
			arr[i].value[k] = '\0';
		}
	}
	key_value(m, arr);
	free(m);
	return (arr);
}

void	print_value(char	*a, struct s_type *arr)
{
	int	i;

	i = 0;
	if (find_in_dict(a, arr) == 1)
	{
		while (ft_strcmp(arr[i].key, a) <= 0)
		{
			if (ft_strcmp(arr[i].key, a) == 0)
			{
				print_string(arr[i].value);
				return ;
			}
			i++;
		}
	}
}

void	look_for_value(int len, char *p, struct s_type *arr)
{
	int	thousand;

	thousand = find_thousands(arr);
	if (len - 4 >= 0)
	{
		if (len % 3 == 0)
		{
			if ((p[0] != '0' && p[0] != '\0')
				|| (p[1] != '0' )
				|| (p[2] != '0' ))
				print_string(arr[thousand + len / 3 - 2].value);
		}
		else if (len % 3 == 2)
		{
			if ((p[0] != '0' && p[0] != '\0')
				|| (p[1] != '0'))
				print_string(arr[thousand + len / 3 - 1].value);
		}
		else if (len % 3 == 1)
			if (p[0] != '0' && p[0] != '\0')
				print_string(arr[thousand + len / 3 - 1].value);
	}
}
