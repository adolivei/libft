/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:02:25 by adolivei          #+#    #+#             */
/*   Updated: 2021/03/02 18:08:39 by adolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

char				*ft_strnstr(const char	*haystack,
		const char *needle, size_t len);

int					ft_atoi(const char *str);

void				ft_bzero(void *s, size_t n);

void				*ft_memset(void *str, int c, size_t n);

void				*ft_calloc(size_t nitems, size_t size);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_isalnum(int c);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

char				*ft_itoa(int n);

size_t				ft_strlen(const char *str);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

int					ft_memcmp(const void *str1, const void *str2, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				ft_putchar_fd(char c, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				*ft_strchr(const char *str, int c);

char				*ft_strdup(const char *s);

size_t				ft_strlen(const char *str);

char				*ft_strjoin(char const *s1, char const *s2);

size_t				ft_strlcat(char *dest, const char *src, size_t size);

size_t				ft_strlcpy(char *dest, const char *src, size_t destsize);

int					ft_strncmp(const char *str1, const char *str2, size_t n);

char				*ft_strrchr(const char *str, int c);

char				*ft_strtrim(char const *s1, char const *set);

char				*ft_substr(char const *s, unsigned int start, size_t len);

int					ft_tolower(int c);

int					ft_toupper(int c);

char				**ft_split(char const *s, char c);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

#endif
