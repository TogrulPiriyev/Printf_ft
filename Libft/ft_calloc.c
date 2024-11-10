/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:20:58 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:56:20 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


void *ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(size * nmemb);
	if(!a)
		return(NULL);
	ft_bzero(a,nmemb);
	return (a);
}


// int main()
// {
// 	long *a;
// 	int n;
// 	long *b;
// 	long *c;

// 	a = (long*)malloc(0);
// 	b = (long*)calloc(0,0);
// 	c = (long*)ft_calloc(0,0);
// 	n = 0;
// 	a[n]=n;
// 	for(n = 0;n<6;n++)
// 	{
// 		printf("calloc %ld,",b[n]);
// 		printf("malloc %ld,",a[n]);
// 		printf("ft_calloc %ld\n",c[n]);
// 	}
// 	printf("%ld",sizeof(a));
// 	printf("%ld",sizeof(b));
// 	printf("%ld",sizeof(c));

// 	return(0);
// }
