/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:58:05 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:56:05 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int chr)
{
	if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')
		|| (chr >= '0' && chr <= '9'))
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
// 	char chr;

// 	chr = '&';
// 	printf("%d",ft_isalnum(chr));
// 	printf("%d",isalnum(chr));
// 	return(0);
// }
