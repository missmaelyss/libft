/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:32:04 by marnaud           #+#    #+#             */
/*   Updated: 2016/11/15 12:02:14 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
    int		len;
    
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(*str) * (len + 1));
    if (str == NULL)
        return (NULL);
    ft_strcpy(str, s1);
    ft_strcat(str, s2);
    return (str);
}
