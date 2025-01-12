/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:30:54 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/02 18:42:37 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/fcntl.h>

struct s_type
{
	char	*key;
	char	*value;
};

struct s_type	*m_allocation(char *filename);
void			only_zero(char *a, int len, struct s_type *arr);
int				find_in_dict(char *p, struct s_type *arr);
char			*get_num(char *str);
int				only_int(char *a);
int				valid_dict(char *filename);
void			look_for_value(int len, char *p, struct s_type *arr);
char			*open_file(char *filename);
void			get_from_dict(char *m, struct s_type *arr);
int				find_thousands(struct s_type *arr);
int				size_of(char *a);
int				ft_strcmp(char *s1, char *s2);
void			print_triples(char *b, struct s_type *arr);
void			print_pairs(char *a, struct s_type *arr);
void			print_char(char a, struct s_type *arr);
void			print_string(char *a);
void			print_value(char	*a, struct s_type *arr);
void			printer(char *a, struct s_type *arr);
void			free_arr(struct s_type *arr);

#endif
