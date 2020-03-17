/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:49:42 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/08 15:01:19 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdio.h>

# define RED "\033[1;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

typedef struct		s_print
{
	int				i;
	int				zero;
	char			plus;
	char			minus;
	char			space;
	char			lattice;
	int				width;
	int				accuracy;
	int				size;
	__int128_t		a;
	long double		fl;
	long double		flex;
	int				nb;
	int				len;
	int				dot;
	char			*str;
}					t_print;

int					ft_printf(char *format, ...);
void				free_list(t_print *ssl);
int					flags(va_list ap, const char *format, t_print *ssl);
int					width(va_list ap, const char *format, t_print *ssl);
int					accuracy(va_list ap, const char *format, t_print *ssl);
int					size(va_list ap, const char *format, t_print *ssl);
void				ft_putnchar(char c, int n, t_print *ssl);
int					search_type(va_list ap, const char *format, t_print *ssl);
int					type_decimal_size(const char *format, va_list ap,
					t_print *ssl);
int					type_decimal_zero(t_print *ssl);
int					type_decimal_plus(const char *format, t_print *ssl);
int					type_decimal_minus(t_print *ssl);
int					type_decimal_space(const char *format, t_print *ssl);
int					type_decimal_priority(const char *format, t_print *ssl);
int					type_decimal_regular(t_print *ssl);
int					decimal_pplus_space(t_print *ssl);
int					decimal_pregular_space(t_print *ssl);
int					decimal_pzero(t_print *ssl);
void				decimal_pspace_if(const char *format, t_print *ssl, int y);
void				decimal_pspace_else(t_print *ssl);
int					type_octal_size(va_list ap, t_print *ssl);
int					type_octal_priority(t_print *ssl);
int					type_octal_minus(t_print *ssl);
int					type_octal_zero(t_print *ssl);
int					type_octal_regular(t_print *ssl);
int					octal_pregular_space(t_print *ssl);
int					type_hexadecimal_size(va_list ap, const char *format,
					t_print *ssl);
int					type_hexadecimal_priority(const char *format,
					t_print *ssl);
int					type_hexadecimal_minus(const char *format,
					t_print *ssl);
int					type_hexadecimal_regular(const char *format, t_print *ssl);
int					type_float_size(va_list ap, t_print *ssl);
int					type_float_priority(t_print *ssl);
int					type_float_minus(t_print *ssl);
int					type_float_plus(t_print *ssl);
int					type_float_space(t_print *ssl);
int					type_float_zero(t_print *ssl);
int					type_float_regular(t_print *ssl);
int					type_pointer_regular(void *b, t_print *ssl);
void				convert_float(t_print *ssl);
int					len_after_dot(t_print *ssl);
char				*convert_hexadecimal_upcase(t_print *ssl, int base);
char				*convert_hexadecimal_lcase(t_print *ssl, int base);
__int128_t			convert(t_print *ssl, int str_base);
int					type_char_priority(va_list ap, const char *format,
					t_print *ssl);
int					type_char_minus_c(t_print *ssl);
int					type_char_regular_c(t_print *ssl);
int					type_char_minus_s(t_print *ssl);
int					type_char_regular_s(t_print *ssl);
int					char_pregular_space(t_print *ssl, int len);
int					char_pminus_space(t_print *ssl, int len);
int					ft_atoi(const char *str);
char				*ft_itoa(long long int n);
void				ft_putchar(char c, t_print *ssl);
void				ft_putnbr(__int128_t n, t_print *ssl);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strlen(const char *s);
void				ft_putstr(char const *s, t_print *ssl);
void				ft_putnstr(char const *s, int i, t_print *ssl);
char				*ft_strnew(size_t size);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *s1, const char *s2);
void				*ft_memset(void *b, int c, size_t len);
int					type_percent_regular(t_print *ssl);
int					type_percent_minus(t_print *ssl);
int					type_percent_priority(t_print *ssl);
char				*ft_itoa8(__int128_t n);
int					hexadecimal_pregular_space(t_print *ssl);
int					accept_color(const char *format, t_print *ssl);
void				ft_putendl(char const *s);
__int128_t			ft_power(__int128_t n, int p);
void				convert_float_zero(t_print *ssl);
int					ft_round(__int128_t r);
void				zero2(long long int i, __int128_t r, long long int j,
					t_print *ssl);
void				float2(long long int i, __int128_t r, long long int j,
					t_print *ssl);
void				minus2(int i, t_print *ssl);
void				decimal_simple_size(const char *format, va_list ap,
					t_print *ssl);
int					find_percent(va_list ap, const char *format, t_print *ssl);
void				ft_putnstr(char const *s, int i, t_print *ssl);
void				decimal_pregular_zero(int i, t_print *ssl);
void				search_mistake(const char *format, t_print *ssl);

#endif
