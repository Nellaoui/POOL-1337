/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:21:02 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/30 07:08:02 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rs;

	rs = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (rs);
}
