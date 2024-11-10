/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:24:54 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:53:16 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
// int main(void)
// {
// 	const char *str;

// 	str = "";
// 	printf("%lu",ft_strlen(str));
// 	printf("%lu",strlen(str));
// 	return(0);
// }
