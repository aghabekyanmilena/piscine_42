/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:20:28 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/30 14:12:08 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

void	ft_sort_params(char **tab, int size)
{
	int		a;
	char	*b;
	int		c;

	a = 1;
	while (a < size)
	{
		c = 1;
		while (c < size - 1)
		{
			if (ft_strcmp(tab[c], tab[c + 1]) > 0)
			{
				b = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = b;
			}
			c++;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_sort_params(argv, argc);
	while (b < argc)
	{
		while (argv[b][a] != '\0')
		{
			write (1, &argv[b][a], 1);
			a++;
		}
		write (1, "\n", 1);
		b++;
		a = 0;
	}
}
