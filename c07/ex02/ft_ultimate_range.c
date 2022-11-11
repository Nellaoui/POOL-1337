/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:46:27 by nelallao          #+#    #+#             */
/*   Updated: 2022/06/01 20:42:33 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	final;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	final = max - min;
	tab = malloc(sizeof(int) * final);
	if (tab == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < final)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (final);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
    int size;
    int *range;

    int i =0;
    min = 5;
    max = 10;
    size = ft_ultimate_range(&range, min, max);
    while(i < max - min)
    {
        printf("%d", range[i]);
        i++;
    }
    printf("final = %d\n",size);
}
*/
