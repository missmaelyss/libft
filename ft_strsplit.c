/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:27:28 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/15 12:01:23 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		value(char *s, char c, int val[2])
{
	int nb_w;
	int n;
	int max_len;
	int len_w;

	n = 0;
	nb_w = 0;
	max_len = 0;
	while (s[n])
	{
		len_w = 0;
		while (s[n] == c)
			n++;
		if (s[n] != c && s[n] != 0)
			nb_w++;
		while (s[n] != c && s[n] != 0)
		{
			len_w++;
			n++;
		}
		if (len_w > max_len)
			max_len = len_w;
	}
	val[0] = nb_w;
	val[1] = max_len;
}

static char		*file(char const *s, char c, int *i)
{
	int		n;
	char	*w;

	if (!(w = (char*)malloc(sizeof(char) * 200)))
		return (0);
	while (s[*i] == c)
		*i += 1;
	n = 0;
	while (s[*i] != c)
	{
		w[n] = s[*i];
		*i += 1;
		n++;
	}
	w[n] = 0;
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		val[2];
	int		n;
	int		i;

	n = 0;
	i = 0;
	value((char*)s, c, val);
	if (!(tab = (char**)malloc(sizeof(char*) * (val[0] + 1))))
		return (0);
	while (n < val[0])
	{
		if (!(tab[n] = (char*)malloc(sizeof(char) * (val[1] + 1))))
			return (0);
		tab[n] = file(s, c, &i);
		n++;
	}
	tab[n] = 0;
	return (tab);
}
