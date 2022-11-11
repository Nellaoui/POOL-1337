/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:12:50 by nelallao          #+#    #+#             */
/*   Updated: 2022/06/01 20:45:11 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(int size, char **strs, char *sep, char *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*ptr = strs[i][j];
			ptr++;
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			*ptr = sep[j];
			ptr++;
			j++;
		}
		i++;
	}
	*ptr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ptr;
	char	*ptr_2;

	if (size == 0)
	{
		ptr = (char *)malloc(1);
		*ptr = 0;
		return (ptr);
	}
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	ptr = (char *)malloc(sizeof(*ptr) * (len + 1));
	if (ptr == 0)
		return (0);
	ptr_2 = ptr;
	ft_strcat(size, strs, sep, ptr);
	return (ptr_2);
}
/*
#include <stdio.h>
int	main(int ac, char **av)

{
	char sep[] = "<-->";
	puts(ft_strjoin(ac, av, sep));
	return (0);
}
*/