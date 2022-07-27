/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:49:30 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/27 19:33:37 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
s: The string from which to create the substring. 
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

Return value
The substring.
NULL if the allocation fails.

Description
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	len_s;
	size_t	len_new;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	len_new = 0;
	while (s[start + len_new] && len > len_new)
		len_new++;
	substr = (char *)malloc(sizeof(*substr) * (len_new + 1));
	if (substr == NULL)
		return (0);
	if (len_s < start)
	{
		ft_memset(substr, 0, len_new + 1);
		return (substr);
	}
	ft_strlcpy(substr, s + start, len_new + 1);
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*new_str;
// 	size_t	i;
// 	size_t	j;

// 	if (ft_strlen(s) < len)
// 		len = ft_strlen(s);
// 	new_str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!s || !new_str)
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen(s) && j < len)
// 		new_str[j++] = s[i++];
// 	new_str[j] = '\0';
// 	return (new_str);
// }

// int main(void)
// {
// 	char name[]="yasin";
// 	char *result;
// 	result=ft_substr(name,1,10);
// 	printf("%s",result);
// 	return (0);
// }