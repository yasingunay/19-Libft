/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:46:51 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/03 18:57:09 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0' && i < n)
	{
		str[i] = 0;
		i ++;
	}
}

// int main () {
//    char str[]="yasingunay";
// 	char str2[]="yasingunay";

//   ft_bzero(str+5,0);
// printf("ft %s\n",str);   

//  bzero(str2+5,0);
// printf("org %s\n",str2);
//    return(0);
// }
