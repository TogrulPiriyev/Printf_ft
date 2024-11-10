/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:07:10 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/26 01:25:58 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int printstr(char *str)
// {
//     int pr_ln;

//     pr_ln = 0;
//     while (*str != '\0')
//     {
//         pr_ln += ft_printf_chr(*str);
//         str++;
//     }
//     return(pr_ln);
// }


int ft_printf_str(char *str)
{
    int pr_ln;
    
    pr_ln = 0;
    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }    
    while (*str != '\0')
    {
        pr_ln += ft_printf(*str);
        str++;
    }
    return (pr_ln);
    
}