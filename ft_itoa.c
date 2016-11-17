/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:15:57 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/17 15:49:34 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		size(int n)
{
	int size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n % 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (size(n) + 1))))
		return (0);
	ft_putnbr_fd(n, *str);
	str[size(n)] = '\0';
	return (str);
}
