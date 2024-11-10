/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:58:05 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:56:00 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int chr)
{
	if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char chr;

// 	chr = 's';
// 	printf("%d",ft_isalpha(chr));
// 	printf("%d",isalpha(chr));
// 	return(0);
// }
