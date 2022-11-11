/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:52:40 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/30 07:12:01 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	num = 2;
	if (nb > 2)
	{
		while (num <= 46340)
		{
			if (num * num == nb)
				return (num);
			num++;
		}
	}
	return (0);
}

// to find the square root with equalize the int nb to the multiple