/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:35:34 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/15 11:43:00 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);

#endif