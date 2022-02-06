/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:21:46 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:21:46 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	temp;
	size_t	counter;

	counter = 0;
	temp = 0;
	while (src[counter] != '\0')
		counter++;
	if (size == 0)
		return (counter);
	while (src[temp] != '\0' && temp < size - 1)
	{
		dest[temp] = src[temp];
		temp++;
	}
	dest[temp] = '\0';
	return (counter);
}
