/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <miaghabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:53:58 by miaghabe          #+#    #+#             */
/*   Updated: 2025/12/14 14:08:09 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int a, char **args)
{
	struct s_type	*arr;
	int				num_len;

	if (a == 2 || a == 3)
	{
		num_len = only_int(args[a - 1]);
		if (num_len + 1 == 0 || num_len > 39)
		{
			print_string("invalid number!\n");
			return (0);
		}
		if (a == 3 && valid_dict(args[a - 2]) == 0)
			return (0);
		else if (a == 3)
			arr = m_allocation(args[a - 2]);
		else
			arr = m_allocation("numbers.dict");
		printer(get_num(args[a - 1]), arr);
		write(1, "\n", 1);
		free_arr(arr);
	}
	else
		print_string("You can take up to 2 arguments!\n");
}
