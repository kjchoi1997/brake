/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:42:54 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:42:54 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*result;
	unsigned char	*iter_result;
	size_t			iter;

	iter = 0;
	result = (unsigned char *)malloc(sizeof(unsigned char) * count * size);
	if (result == NULL)
		return (NULL);
	iter_result = result;
	while (iter < count * size)
		iter_result[iter++] = 0;
	return ((void *)result);
}
