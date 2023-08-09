/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 01:14:16 by acaldas           #+#    #+#             */
/*   Updated: 2022/11/25 01:14:29 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h> 
# include <stdlib.h>

//int	ft_ishexa(unsigned long arg, char index);
int	ft_isptr(unsigned long nbr);
int	check_arg(char index, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putnbr(unsigned long n, char index);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa(int n);
int	ft_id(int i);

#endif