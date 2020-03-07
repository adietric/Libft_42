/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adietric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:20:01 by adietric          #+#    #+#             */
/*   Updated: 2018/11/24 14:42:36 by adietric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_b(char *dest, char *str, int k)
{
	int			j;

	j = 0;
	while (str[k] != '\t' && str[k] != '\n' && str[k] != ' ' && str[k] != '\0')
	{
		dest[j] = str[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}

static int		minus_space(char *str, int k)
{
	while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
		k++;
	return (k);
}

static int		nb_word(char *str)
{
	int			i;
	int			c;

	i = 1;
	c = 0;
	if (str[0] != ' ' && str[0] != '\n' && str[0] != '\t' && str[0] != '\0')
		c++;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
					&& str[i] != '\0')
				&& (str[i - 1] == ' ' || str[i - 1] == '\t'
					|| str[i - 1] == '\n'))
			c++;
		i++;
	}
	return (c);
}

static int		nb_char(char *str, int i)
{
	int			c;

	c = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		if (str[i] == '\0')
		{
			return (c);
		}
		i++;
		c++;
	}
	return (c);
}

char			**ft_split_whitespaces(char *str)
{
	char		**tab;
	int			nb_w;
	int			i;
	int			l;
	int			k;

	k = 0;
	i = 0;
	nb_w = nb_word(str);
	tab = (char**)malloc(sizeof(char*) * nb_w + 1);
	while (i < nb_w)
	{
		if (str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
			k = minus_space(str, k);
		l = nb_char(str, k);
		tab[i] = (char*)malloc(sizeof(char) * l);
		tab[i] = ft_b(tab[i], str, k);
		k = k + l;
		k = minus_space(str, k);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
