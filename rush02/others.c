/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:49:55 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/02 18:27:20 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	size_of(char *a)
{
	int	len;

	len = 0;
	while (a[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i < j)
		return (-1);
	if (i > j)
		return (1);
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_thousands(struct s_type *arr)
{
	int	i;

	i = 0;
	while (ft_strcmp(arr[i].key, "1000") != 0)
		i++;
	return (i);
}

int	find_in_dict(char *p, struct s_type *arr)
{
	int	i;

	i = 0;
	while (ft_strcmp(arr[i].key, p) <= 0)
	{
		if (ft_strcmp(arr[i++].key, p) == 0)
			return (1);
	}
	return (0);
}
