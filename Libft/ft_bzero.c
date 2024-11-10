/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:14:15 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:56:23 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*chr;

	count = 0;
	chr = s;
	while (count < n)
	{
		chr[count] = '0';
		count++;
	}
}
// int main(void)
// {
// 	char str[5] = "hello";
// 	size_t n;

// 	n = 0;
// 	ft_bzero(str,3);
// 	printf("%s\n",str);
// 	bzero(str,n);
// 	printf("%s\n",str);
// 	return(0);
// }
