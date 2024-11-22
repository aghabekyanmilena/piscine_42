/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:50:56 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/17 18:20:23 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;

	printf("a: %d b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d b: %d", a, b);
}*/
