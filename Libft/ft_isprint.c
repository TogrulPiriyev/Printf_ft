/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:24:54 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:55:47 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isprint(int chr)
{
	if (chr >= 32 && chr <= 126)
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char chr;

// 	chr = 'd';
// 	printf("%d",ft_isprint(0x7E));
// 	printf("%d",isprint(0x7E));
// 	return(0);
// }
