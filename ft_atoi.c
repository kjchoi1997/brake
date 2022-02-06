/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:18:03 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:41:45 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static char	*removespace(char *s);

int	ft_atoi(char *str)
{
	long long	counter;
	long long	minuscounter;
	long long	result;

	result = 0;
	counter = 0;
	minuscounter = (long long) 1;
	str = removespace(str);
	if (str[counter] != '\0' && (str[counter] == '-'
			|| str[counter] == '+'))
		if (str[counter++] == '-')
			minuscounter = (long long) -1;
	while (str[counter] != '\0' && str[counter] >= '0'
		&& str[counter] <= '9')
	{
		result *= (long long) 10;
		result += (long long)((str[counter] - '0') * (minuscounter));
		counter++;
	}
	return (result);
}

static char	*removespace(char *s)
{
	int	c;

	c = 0;
	while ((s[c] == '\t' || s[c] == '\n' || s[c] == '\v'
			|| s[c] == '\f' || s[c] == '\r' || s[c] == ' ')
		&& s[c] != '\0')
		c++;
	return (s + c);
}
