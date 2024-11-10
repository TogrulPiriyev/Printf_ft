/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:28:46 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:55:32 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *str;

    str = s;
    while (*str != '\0' && n > 0)
    {
        if (*str == c)
            return ((unsigned char *)str);
        n--;
        str++;
    }
    return (NULL);
}

// int main()
// {
//     char *st = "hedello";

//     printf("%p\n",memchr(st,'d',1));
//     printf("%p",ft_memchr(st,'d',1));
// }
