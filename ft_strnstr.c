/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:45:56 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:45:57 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i_h;
	size_t	i_n;

	i_h = -1;
	if (*n == '\0')
		return ((char *)h);
	while (++i_h < len)
	{
		i_n = -1;
		while (++i_n + i_h <= len)
		{
			if (n[i_n] == '\0')
				return ((char *)h + i_h);
			if (h[i_h + i_n] == '\0' || h[i_h + i_n] != n[i_n])
				break ;
		}
		if (i_h + i_n == len || h[i_h + i_n] == '\0')
			break ;
	}
	return (NULL);
}
