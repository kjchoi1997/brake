/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:45:15 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:45:16 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	casted_c;

	casted_c = (char) c;
	while (*s != casted_c && *s != '\0')
		s++;
	if (*s == casted_c)
		return ((char *)s);
	return (0);
}
