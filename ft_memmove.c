/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:20:27 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:20:27 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*casted_dst;
	const char	*casted_src;
	size_t		index;

	casted_dst = (char *)dst;
	casted_src = (const char *)src;
	index = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	if (casted_dst > casted_src)
	{
		while (len--)
			casted_dst[len] = casted_src[len];
	}
	else
	{
		while (++index < len)
			casted_dst[index] = casted_src[index];
	}
	return (dst);
}
