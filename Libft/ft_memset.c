/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:14:15 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:54:42 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*chr;

	count = 0;
	chr = s;
	while (count < n)
	{
		chr[count] = c;
		count++;
	}
	return (chr);
}
// int main(void)
// {
// 	char str[5] = "hello";
// 	char chr;
// 	size_t n;

// 	n = 1;
// 	chr = 'b';
// 	ft_memset(str,chr , 3);
// 	chr = 's';
// 	memset(str,chr,n);
// 	printf("%s",str);
// 	return(0);
// }
