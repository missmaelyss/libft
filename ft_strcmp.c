/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:11:10 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/14 11:32:01 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] != '\0')
		n++;
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
