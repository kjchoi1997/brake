/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:20:14 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:20:14 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*casted_s;

	if (n == 0)
		return (NULL);
	casted_s = (const unsigned char *)s;
	while (n--)
	{
		if (*casted_s == (unsigned char)c)
			return ((void *)casted_s);
		casted_s++;
	}
	return (NULL);
}
