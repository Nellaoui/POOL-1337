/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:19:05 by nelallao          #+#    #+#             */
/*   Updated: 2022/06/01 11:24:15 by nelallao         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*final;
	int		i;
	int		l;

	l = ft_strlen(src);
	i = 0;
	final = malloc(sizeof(char) * (l + 1));
	if (final == 0)
		return (0);
	while (src[i] != '\0')
	{
		final[i] = src[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}
// duplicate the strring
// line 34 if the maloc failed return (0);
// in line 33 we enter safe size of the giving string + the null charachter
// final == dest