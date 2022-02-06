/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:20:21 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:20:22 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*casted_dst;
	const char	*casted_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	casted_dst = (char *)dst;
	casted_src = (char *)src;
	while (n--)
	{
		*casted_dst = *casted_src;
		casted_dst++;
		casted_src++;
	}
	return (dst);
}
