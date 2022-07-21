/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:40:21 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/21 12:05:32 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

char *pdst;
char *psrc;

pdst=(char *)dst;
psrc=(char *)src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

int		main(void)
{
	char	dst[] = "123456789";
	char	src[] = "hello";
	
	char	*ret;
	char	*ret2;
	
	ret = ft_memcpy(dst, src, 5);
	ret2 = memcpy(dst, src, 5);
	printf("new dest(ft): %s\n", ret);
	printf("new dest(or): %s\n", ret2);
	
	return (0);
}