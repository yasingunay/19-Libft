/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:37:13 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/13 11:43:55 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)

{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
	len++;
	if (dest_size == 0)
		return (len);
	i = 0;
	while (src[i] && i < (dest_size - 1))
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (len);
}

// int main()

// {
// char source[]= "yasin";
// char dest[0];
// int ret;

// ret=ft_strlcpy(dest,source,2);

//  printf("Copied '%s' into '%s', length %d\n",source, dest,ret);

// return (0);
// }
