/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:43:47 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/30 06:54:18 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rs;

	rs = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rs = rs * nb;
		nb--;
	}
	return (rs);
}
