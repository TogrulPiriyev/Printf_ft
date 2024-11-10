/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:15:53 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:55:51 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isdigit(int chr)
{
	if (chr >= '0' && chr <= '9')
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char chr;

// 	chr = '2';
// 	printf("%d",ft_isdigit(chr));
// 	printf("%d",isdigit(chr));
// 	return(0);
// }
