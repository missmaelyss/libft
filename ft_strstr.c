/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:07:35 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/17 11:09:50 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *meule_de_foin, char *aiguille)
{
	int n;

	n = 0;
	if (ft_strlen(aiguille) == 0)
		return (meule_de_foin);
	while (ft_strncmp(&meule_de_foin[n], aiguille, ft_strlen(aiguille))
			&& meule_de_foin[n] != 0)
		n++;
	if (meule_de_foin[n] == 0)
		return (0);
	return (&meule_de_foin[n]);
}
