/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:35:20 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/12 11:38:32 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int		i;
	char	*src;

	i = 0;
	src = (char*)s;
	while (i < (int)n)
	{
		if (src[i] == (char)c)
			return (&src[i]);
		i++;
	}
	return (0);
}
