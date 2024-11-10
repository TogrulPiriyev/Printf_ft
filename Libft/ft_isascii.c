/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:24:54 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:55:55 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int chr)
{
	if (chr >= 0x00 && chr <= 0x7f)
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char chr;

// 	chr = 'd';
// 	printf("%d",ft_isascii(chr));
// 	printf("%d",isascii(chr));
// 	return(0);
// }
