/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:32 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 14:10:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
#define FT_PRINTf_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printf(const char *format, ...);
int     ft_putchar(int c);
int     ft_putstr(char *str);
int     ft_pointeraddress(void *str);
int     ft_hexadecimal(unsigned long nbr, char str);

#endif