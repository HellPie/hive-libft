/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:11:27 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 15:10:42 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "ft_defs.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);

int		ft_memcmp(const void *v1, const void *v2, size_t n);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);

int		ft_strcmp(const char *l, const char *r);
int		ft_strncmp(const char *l, const char *r, size_t n);

// int		ft_strcoll(const char *s1, const char *s2);
// size_t	ft_strxfrm(char *s1, const char *s2, size_t len);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// size_t	ft_strspn(const char *s1, const char *s2);
// size_t	ft_strcspn(const char *s1, const char *s2);
// char	*ft_strpbrk(const char *s1, const char *s2);
char	*ft_strstr(const char *h, const char *n);
// char	*ft_strtok(const char *s1, const char *s2);

size_t	ft_strlen(const char *s);

// char	*ft_strerror(int err);

char	*ft_stpcpy(char *dest, const char *src);
char	*ft_stpncpy(char *dest, const char *src, size_t n);
size_t	ft_strnlen(const char *s1, size_t len);
char	*ft_strdup(const char *s);
// char	*ft_strndup(const char *s1, size_t len);
// char	*ft_strsignal(int sig);

size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *s1, const char *s2, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memrchr(const void *m, int c, size_t n);
char	*ft_strchrnul(const char *s, int c);

/**
 * The following are methods commonly defined in strings.h, but string.h ends
 * up including the strings.h header in both GNU-like and BSD-like LIBCs and
 * most of the methods are deprecated, so only the bare minimum will be done
 * to support them and I won't make an ft_strings.h header for it.
 */

// int		ft_bcmp(const void *a, const void *b, size_t size);
// void	ft_bcopy(const void *a, void *b, size_t size);
void	ft_bzero(void *s, size_t n);
// char	*ft_index(const char *s, int i);
// char	*ft_rindex(const char *s, int i);

// int		ft_ffs(int a);
// long	ft_ffsl(long a);
// long long	ft_ffsll(long long a);

#endif
