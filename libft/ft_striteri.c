/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:45:40 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/28 11:35:12 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void	ft_to_lowercase(unsigned int i, char *ch)
{
	printf("s[%d] is %c\n", i, ch[0]);
	if (ch[0] >= 65 && ch[0] <= 90)
		ch[0] = ch[0] + 32;
}

// int main(void)
// {
// char s[]="YASINGUNAY";
// ft_striteri(s,&ft_to_lowercase);
// printf("%s", s);
// return (0);
// }