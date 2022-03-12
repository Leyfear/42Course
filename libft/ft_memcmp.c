/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytokmak <ytokmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:57:25 by ytokmak           #+#    #+#             */
/*   Updated: 2022/02/02 18:22:57 by ytokmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*st1;
	char	*st2;

	st1 = (char *)str1;
	st2 = (char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (st1[i] == st2[i] && n - 1 > 0)
	{
		n--;
		i++;
	}
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}
