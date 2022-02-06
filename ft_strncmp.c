/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:45:52 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:45:52 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	length_s1;
	size_t	iter;

	length_s1 = 0;
	iter = 0;
	while (s1[length_s1] != '\0')
		length_s1++;
	while (iter < length_s1 && iter < n - 1)
	{
		if (s1[iter] != s2[iter])
			break ;
		iter++;
	}
	if (n == 0)
		return (0);
	return (((unsigned char *)s1)[iter] - ((unsigned char *)s2)[iter]);
}
