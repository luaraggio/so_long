#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <signal.h>

//Libft:

void	my_bzero(void *s, size_t n);
int		my_isalnum(int c);
int		my_isalpha(int c);
int		my_isascii(int c);
int		my_isdigit(int c);
int		my_isprint(int c);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memmove(void *dest, const void *src, size_t n);
void	*my_memset(void *s, int c, size_t n);
size_t	my_strlcpy(char *dst, const char *src, size_t size);
size_t	my_strlcat(char *dst, const char *src, size_t size);
size_t	my_strlen(const char *str);
int		my_tolower(int c);
int		my_toupper(int c);
char	*my_strchr(const char *s, int c);
char	*my_strrchr(const char *s, int c);
int		my_strncmp(const char *s1, const char *s2, size_t n);
void	*my_memchr(const void *s, int c, size_t n);
int		my_memcmp(const void *s1, const void *s2, size_t n);
char	*my_strnstr(const char *big, const char *little, size_t len);
int		my_atoi(const char *nptr);
void	*my_calloc(size_t nmemb, size_t size);
char	*my_substr(char const *s, unsigned int start, size_t len);
char	*my_strjoin(char const *s1, char const *s2);
char	*my_strtrim(char const *s1, char const *set);
char	**my_split(char const *s, char c);
char	*my_itoa(int n);
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
void	my_striteri(char *s, void (*f)(unsigned int, char *));
void	my_putchar_fd(char c, int fd);
void	my_putstr_fd(char *s, int fd);
void	my_putendl_fd(char *s, int fd);
void	my_putnbr_fd(int n, int fd);
char	*my_strdup(const char *s);

//Printf:

int		convert_format(va_list args, char c);
int		my_printf(const char *s, ...);
int		my_print_char(char c);
int		my_print_string(char *s);
int		my_print_decimal(int dec);
int		my_print_lowerx(unsigned int n);
int		my_print_upperx(unsigned int n);
int		my_print_pointer(void *pointer);
int		my_print_un(unsigned int n);
char	*my_utoa_base(unsigned long long n, int base, char *buffer);
char	*my_itoa_base(int n, int base, char *s);

//GNL:

char	*get_line_gnl(int fd, char *backup, char *str);
char	*get_backup_gnl(char *line);
char	*get_next_line_gnl(int fd);
size_t	my_strlen_gnl(const char *str);
char	*my_strjoin_gnl(char const *s1, char const *s2);
char	*my_strcpy_gnl(char *dest, char *src);
char	*my_strdup_gnl(const char *s);
char	*my_strchr_gnl(const char *s, int c);
char	*my_substr_gnl(char const *s, unsigned int start, size_t len);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif
