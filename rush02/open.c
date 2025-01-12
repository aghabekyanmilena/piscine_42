/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:53:00 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/03 16:53:11 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*open_file(char *filename)
{
	int		i;
	char	*m;
	int		byte;

	byte = 0;
	m = malloc(sizeof (char ) * 5000);
	i = open(filename, O_RDONLY);
	if (i == -1)
		print_string("Wrong dictionary !!\n");
	else
		byte = read(i, m, 5000);
	m[byte] = '\0';
	while (byte < 5000)
		m[byte++] = '\0';
	close(i);
	return (m);
}

void	free_arr(struct s_type *arr)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		free(arr[i].key);
		free(arr[i].value);
		i++;
	}
	free(arr);
}
