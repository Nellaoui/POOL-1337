/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:53:28 by nelallao          #+#    #+#             */
/*   Updated: 2022/05/30 07:08:51 by nelallao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
//                         0, 1, 2, 3, 4, 5, 6, 07, 08
// FOR 0 && 1 return the same index
