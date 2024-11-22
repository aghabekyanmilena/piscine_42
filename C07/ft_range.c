/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:37:21 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/30 15:49:26 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
/*#include <stdio.h>
int main()
{
	int min = 2;
	int max = 10;
	int *arr = ft_range(min, max);
	int i = 0;
	while (i < 8)
	{
		printf("%d\t", arr[i]);
		i++;
	}
}*/
