/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adietric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:26:29 by adietric          #+#    #+#             */
/*   Updated: 2018/11/24 14:39:53 by adietric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) != 0)
	{
		while (i <= (nb / i))
		{
			if (nb % i == 0)
				return (0);
			i = i + 2;
		}
		return (1);
	}
	return (0);
}
