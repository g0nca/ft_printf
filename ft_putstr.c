/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@student.42.fr>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:12:30 by marvin            #+#    #+#             */
/*   Updated: 2024/11/11 14:12:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int     ft_putstr(char *str)
{
    int     count;

    count = 0;
    if (!str)
        str = ("(null)");
    while (str[count] != '\0')
    {
        ft_putchar(str[count]);
        count++;
    }
    return (count);
}