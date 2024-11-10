/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:41:12 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:21 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcpy(char *dst, const char *restrict src, size_t sz)
{
    int i;

    i = 0;
    while(src[i]!='\0' && (int)sz>i)
    {
        dst[i]=src[i];
        i++;
    }
    i = 0;
    while(src[i]!='\0')
    {
        i++;
    }
    printf("%s",dst);
    return(i);
}

// int main()
// {
//     char str1[] = "ehgwfuyweg";
//     char str2[7] = "";


//     // strncpy(str2,str1,4);
//     printf("%ld",ft_strlcpy(str2,str1,3));

//     return(0);
// }
