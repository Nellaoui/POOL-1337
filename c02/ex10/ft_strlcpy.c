/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:37:00 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/25 06:24:02 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = len(src);
	while (src[i] != '\0' && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
