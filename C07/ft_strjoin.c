/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:51:02 by miaghabe          #+#    #+#             */
/*   Updated: 2024/10/30 17:04:20 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total);
}

int	cat(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		index;
	int		i;
	char	*result;

	if (size == 0)
		return ((char *)malloc(1));
	total_len = total(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < size)
	{
		index = cat(result, strs[i], index);
		if (i < size - 1)
			index = cat(result, sep, index);
		i++;
	}
	result[index] = '\0';
	return (result);
}
/*#include <stdio.h>
int main()
{
	char *strs[] = {"heil", "HITLER", "!"};
	char *sep = "卐";
	char *result = ft_strjoin(3, strs, sep);
	printf("%s\n", result);
	free(result);
}*/
