/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:43:23 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/26 01:55:07 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list args, char c)
{
    int pr_ln;

    pr_ln = 0;
    if (c == 's')
        pr_ln += ft_printf_str(va_arg(args, char *));
    else if (c == 'd' || c == 'i')
        pr_ln += ft_printf_di(va_arg(args, int));    
    else if (c == 'c')
        pr_ln += ft_printf_chr(va_arg(args, char));
    else if (c == '%')
        pr_ln += ft_printf_chr('%');
    return (pr_ln);    
}


int ft_printf(const char *format, ...)
{
    int     count;
    va_list args;
    int     pr_len;

    count = 0;
    pr_len = 0;
    va_start(args,format);
    while(format[count] != '\0')
    {
        if (format[count] == '%')
        {
            pr_len += ft_format(args, format[count + 1]);
            count++;
        }
        else
            pr_len += ft_printf_chr(format[count]);
        count++;
    }
    va_end(args);
    return (pr_len);
}