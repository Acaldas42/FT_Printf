/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldas <acaldas@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 01:15:39 by acaldas           #+#    #+#             */
/*   Updated: 2022/12/20 22:11:28 by acaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(char index, va_list args)
{
	if (index == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (index == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (index == 'i' || index == 'd')
		return (ft_id(va_arg(args, int)));
	if (index == 'x' || index == 'X' || index == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), index));
	if (index == 'p')
		return (ft_isptr(va_arg(args, unsigned long)));
	return (ft_putchar(index));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	if (!str[i])
		return (-1);
	va_start(args, str);
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += check_arg(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
