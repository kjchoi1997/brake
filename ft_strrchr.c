/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:46:04 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:46:05 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	casted_c;
	size_t	index;

	casted_c = (char) c;
	index = 0;
	while (s[index] != '\0')
		index++;
	if (index == 0)
	{
		if (c != '\0')
			return (0);
		else
			return ((char *)s);
	}
	while (index > 0 && s[index] != casted_c)
		index--;
	if (s[index] == casted_c)
		return ((char *)s + index);
	return (0);
}
