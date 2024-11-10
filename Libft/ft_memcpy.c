/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:14:15 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:55:25 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*str1;
	const unsigned char *str2;

	count = 0;
	str1 = dest;
	str2 = src;
	if (!src)
	{
		return(NULL);
	}
	while (count < n)
	{
		str1[count] = str2[count];
		count++;
	}
	return (dest);
}
// int main(void)
// {
// 	char str1[5] = "hello";
// 	char str2[3] = "bye";
// 	// char str3[5] = "hello";
// 	// char str4[3] = "bye";
// 	size_t n;

// 	n = 2;
// 	ft_memcpy(str1,str2 ,n);
// 	// memcpy(str1,str2,n);
// 	printf("%s\n",str1);
// 	// printf("str4:%s\n",str4);
// 	return(0);
// }
