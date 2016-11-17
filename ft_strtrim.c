/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:01:46 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/17 11:49:26 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		test_final(char const *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	while ((s1[i - 1] == ' ') || (s1[i - 1] == '\t') || (s1[i - 1] == '\n'))
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		istr;

	i = 0;
	istr = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	if (!(str = (char*)malloc(sizeof(char) * (test_final(s) - i - 1))))
		return (0);
	while (i < test_final(s))
	{
		str[istr] = s[i];
		istr++;
		i++;
	}
	str[istr] = 0;
	return (str);
}
