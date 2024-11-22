/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:26:27 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/30 14:34:38 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = (int *)malloc(sizeof(int) * diff);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (diff);
}
/*#include <stdio.h>
int main()
{
	int min = 2;
	int max = 10;
	int *arr;
	
	int diff = ft_ultimate_range(&arr, min, max);
	int i = 0;
	while (i < diff)
	{
		printf("%d\t", arr[i]);
		i++;
	}
}*/
