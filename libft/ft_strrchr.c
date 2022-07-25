/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:21:29 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/25 18:33:51 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	x;
	int				i;

	str = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (str[i])
		++i;
	while (i >= 0)
	{
		if (str[i] == x)
			return ((char *)str + i);
		--i;
	}
	return (NULL);
}
