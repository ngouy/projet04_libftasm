/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 19:15:26 by ngouy             #+#    #+#             */
/*   Updated: 2015/03/03 16:27:52 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

# include <stdlib.h>

size_t				ft_strlen(const char *s);
void				ft_bzero(void *s, size_t n);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strcat(char *s1, char *s2);
int					ft_puts(const char *s);
void				ft_memset(void *b, int c, size_t n);
void*				ft_memcpy(char *dst, char *src, size_t n);
char*				ft_strdup(char *str);
void				ft_cat(int i);

void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strchr(const void *s, int c);
char				*ft_strrchr(const void *s, int c);
char*				ft_strndup(char *str, size_t i);
char*				ft_strnew(int i);

#endif
