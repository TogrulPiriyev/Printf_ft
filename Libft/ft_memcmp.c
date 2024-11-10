/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:24:50 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:55:29 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = s1;
    str2 = s2;
    while (*str1 != '\0' || 0 < n)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}

// int main(void)
// {
//     char *str1 = "hello";
//     char *str2 = "he3llo";

//     printf("%d\n",memcmp(str1,str2,5));
//     printf("%d",ft_memcmp(str1,str2,5));
// }
