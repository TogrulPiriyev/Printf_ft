/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:49:26 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/26 01:09:22 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf_chr(int c)
{
    write(1, &c, 1);
    return (1);
}