/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:20:43 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:20:43 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	char	new_line;

	if (s == NULL || fd < 0)
		return ;
	len = 0;
	new_line = '\n';
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, &new_line, 1);
}
