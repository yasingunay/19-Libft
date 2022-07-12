/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:58:34 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/12 08:09:30 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 0 && c <= 31)
	{
		return (0);
	}
	else
		return (1);
}

// int main()

// {

// int result;

// result= ft_isprint('\n');
// printf("%d\n",result);

// result= ft_isprint(' ');
// printf("%d\n",result);

// result= ft_isprint('a');
// printf("%d\n",result);

// result= ft_isprint('9');
// printf("%d\n",result);
// }