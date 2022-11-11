/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 00:12:45 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/14 12:26:37 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zaz;

	zaz = 'z';
	while (zaz >= 'a')
	{
		write(1, &zaz, 1);
		zaz--;
	}
}
