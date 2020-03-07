/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adietric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:27:32 by adietric          #+#    #+#             */
/*   Updated: 2018/11/24 14:43:07 by adietric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_prime(int nb)
{
	int		i;

	i = 3;
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

int			ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while ((ft_is_prime(nb) == 0))
	{
		nb++;
	}
	return (nb);
}
