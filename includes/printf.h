/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:45:50 by vsmolii           #+#    #+#             */
/*   Updated: 2019/05/13 13:29:44 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <wchar.h>
# include "../libft/libft.h"

typedef struct		s_format
{
	int			p;
	int			ms;
	int			h;
	int			sp;
	int			z;
	int			ch;
	int			ch_cap_x;
	int			x_cap_x;
	int			w;
	int			prs;
	int			prs_ext;
	char		*len;
}					t_format;

int					ft_printf(char *str, ...);
int					ft_output_hope(int *i, va_list arg, char *str);
void				ft_parsing(t_format *data, char *str, int *i);
char				*ft_itoa_intmax(long long value);
char				*itoa_fill_un(char *str, uintmax_t value, int base);
char				*itoa_fill_unsigned(uintmax_t value, int base);
char				*ft_itoa_unsigned(uintmax_t value);
char				*ft_itoa_base_unsigned(uintmax_t value, int base);
char				*itoa_filler_b(char *str, uintmax_t value, int base);
char				*ft_itoa_base(intmax_t value, int base);
char				*ft_itoa_base_ll(long long int n, char *base);
char				*itoa_filler_p(char *tab, intmax_t val, int base, int flag);
intmax_t			ft_abs(intmax_t nb);
char				*itoa_filler(char *str, uintmax_t value);
long long			ft_sign(long long nbr);
char				*itoa_fill(char *str, long long value, int flag);
char				*ft_update(char *str, char *update);
void				init_data(t_format *data);
int					get_flags(t_format *data, char *str, int i);
int					get_width(t_format *data, char *str, int i);
int					get_precision(t_format *data, char *str, int i);
int					get_length_flag(t_format *data, char *str, int i);
char				*str_space(char *s_width, int len);
int					start_o_work(va_list arg, t_format *data,
									char *str, int *i);
char				*work_with_o_format(t_format *data, uintmax_t nbr);
char				*get_precs_o_str(t_format *data, char *str,
									int len_str, uintmax_t nbr);
char				*get_width_o_str(t_format *data, char *str);
char				*ft_toupper_str(char *str);
int					start_p_work(va_list arg, t_format *data);
int					work_woth_c_format(va_list arg, t_format *data);
int					start_d_work(va_list arg, t_format *data);
char				*work_with_d_format(t_format *data, intmax_t nbr);
char				*get_precision_str(t_format *data, char *str,
									int len_str, intmax_t nbr);
char				*get_width_str(t_format *data, char *str, intmax_t nbr);
char				*flag_plus_or_space(char *str, char symb);
char				*str_fill(int len, char symb);
char				*precis_str_fill(t_format *data, char *str,
									int len_str, intmax_t nbr);
int					work_with_s_format(va_list arg, t_format *data);
char				*get_precision_new_str(t_format *data, char *str,
									int len_str);
char				*get_width_new_str(t_format *data, char *str);
char				*convert_float_nbr(t_format *data, long double nbr);
int					convers_f(va_list arg, t_format *data);
char				*get_width_f_str(t_format *data, char *str, int len,
															long double nbr);
char				*change_symb_position(char *str, char symb);
int					start_persnt_work(t_format *data);
char				*get_width_str_2(t_format *data, char *str, intmax_t nbr);
char				*get_width_f_str_2(t_format *data, char *str, int len);
char				*persent_work_2(t_format *data, int len);
char				*extra_func_c_1(char *str, int len);
char				*extra_func_c_2(t_format *data, int len, char *str, char c);
void				extra_func_o(t_format *data, char *str, int *i);
char				*extra_func_d(t_format *data, char *str, int len_new);
char				*get_precs_f(t_format *d, char *str, int sign,
															long double nbr);
void				prepare_float(int *sign, long double *nbr, t_format *data);
int					start_f_work(va_list arg, t_format *data);

#endif
