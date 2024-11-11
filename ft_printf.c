/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:27 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 14:10:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     ft_format_check(const char *str, va_list args)
{
    int     count;

    count = 0;
    if (*str == 'c')
        count += ft_putchar(va_arg(args, int));
    if (*str == 's')
        count += ft_putstr(va_arg(args, char *));
    if (*str == 'p')
        count += ft_pointeraddress(va_arg(args, void *));
    if (*str == 'x' || *str == 'X')
        count += ft_hexadecimal(va_arg(args, unsigned int), *str);
    if (*str == '%')
        count += ft_putchar('%');
    return (count);
}

int     ft_printf(const char *format, ...)
{
    int     i;
    int     count;
    va_list     args;
    
    va_start(args, format);
    count = 0;
    i = 0;
    while (format[i] != '\0')
    {
        	if (format[i] == '%' && format[i + 1] != '\0')
            {
               i++;
               count +=  ft_format_check(&format[i], args);
            }
            else if (format[i] == '%' && format[i + 1] == '\0')
                return (-1);
            else
                count += ft_putchar(format[i]);
            i++;
    }
    va_end (args);
    return (count);
}

int main(void)
{
    //ft_printf("FT_PRINTF:%s\n", "Hello World !!!");
    printf("PRINTF:%x\n", "Hello World !!!");
    return (0);
}