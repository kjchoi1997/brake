/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:44:40 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:44:41 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	write_val;
	size_t			iter;
	unsigned char	*casted_b;

	iter = 0;
	casted_b = (unsigned char *)b;
	write_val = (unsigned char) c;
	while (iter < len)
		casted_b[iter++] = write_val;
	return (b);
}
