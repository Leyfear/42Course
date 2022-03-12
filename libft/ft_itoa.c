/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytokmak <ytokmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:02:04 by fayan             #+#    #+#             */
/*   Updated: 2022/02/05 15:33:54 by ytokmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static char	*strfill(char *str, int i, long long nm, int sign)
{
	str[i] = '\0';
	while (i--)
	{
		str[i] = (nm % 10) + 48;
		nm /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	long long	temp;
	long long	nm;
	char		*str;
	int			sign;

	sign = 1;
	i = 1;
	nm = (long long) n;
	if (nm < 0)
	{
		nm *= -1;
		sign *= -1;
		i++;
	}
	temp = nm;
	while (temp % 10 != temp)
	{
		temp /= 10;
		i++;
	}
	str = (char *) malloc ((i + 1) * sizeof(char));
	if (!str)
		return (0);
	return (strfill(str, i, nm, sign));
}
