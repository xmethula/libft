//42 Heading

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <unistd.h>

size_t		ft_strlen(const char *s);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
