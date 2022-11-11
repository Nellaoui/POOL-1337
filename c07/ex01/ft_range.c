/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:57:33 by nelallao          #+#    #+#             */
/*   Updated: 2022/06/01 20:36:06 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	final;

	i = 0;
	if (min >= max)
		return (0);
	final = max - min;
	tab = malloc(sizeof(int) * final);
	if (tab == 0)
		return (0);
	while (i < final)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/* 
#include <stdio.h>

int	main(void)
{
    int i;
	int	max;
	int	min;
    int *tab;

    max = 10;
    min = 2;
    i = 0;
    tab = ft_range(min, max);
    while (i < max - min)
    {
    printf("%d",tab[i]);
    i++;
    }
}
*/
// final == difrance between the min and max