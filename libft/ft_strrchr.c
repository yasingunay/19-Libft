/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:21:29 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/05 08:21:02 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int main(void)
// {
// char str[]="yasin.gunay.123";
// char *ret =strrchr(str, '.');
// printf("or %s\n",ret);

// char str2[]="yasin.gunay.123";
// char *ret2 =ft_strrchr(str, '.');
// printf("ft %s\n",ret2);
// return (0);
// }
