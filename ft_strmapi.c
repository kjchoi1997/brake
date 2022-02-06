/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:21:55 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:21:55 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char const		*iter_s;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 1;
	iter_s = s;
	while (*(iter_s++))
		len++;
	result = malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	len = -1;
	while (s[++len])
		result[len] = f(len, s[len]);
	result[len] = '\0';
	return (result);
}
