/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:26:03 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:26:05 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlength;
	size_t	srclength;
	size_t	cy;
	size_t	len;

	srclength = 0;
	destlength = 0;
	len = 0;
	destlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (size <= destlength)
		return (srclength + size);
	cy = destlength;
	while (destlength < size - 1 && src[len])
	{
		dst[destlength++] = src[len++];
	}
	dst[destlength] = '\0';
	return (srclength + cy);
}
