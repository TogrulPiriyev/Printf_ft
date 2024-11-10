/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:15:33 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:28 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src,size_t sz)
{
    int i;

    i = 0;
    if(sz <= ft_strlen(dst))
        return(sz + ft_strlen(src));
    while(src[i] != '\0' && (int)sz > i + 1)
    {
        dst[strlen(dst) + i]+=src[i];
        i++;
    }
    dst[strlen(dst) + i] = '\0';
    printf("%s",dst);
    return(ft_strlen(dst)+ft_strlen(src));
}

// int main()
// {
//     char str1[] = "hel";
//     char str2[7] = "hel";

//     // printf("%s\n",strncat(str2,str1,6));
//     printf("%ld\n",ft_strlcat(str2,str1,3));

//     return(0);
// }
