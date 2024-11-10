/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:14:15 by tpiriyev          #+#    #+#             */
/*   Updated: 2023/11/17 02:54:58 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int  size;
    unsigned        char    *dst;
    const unsigned  char    *sourc;

    dst = dest;
    sourc = src;
    if(!dst || !sourc)
    {
        return(NULL);
    }
    if(dst>sourc)
    {
        size = n - 1;
        while( size >= 0)
        {
            dst[size] = sourc[size];
            size--;
        }
    }
    else
    {
        size = 0;
        while (size < (int)n)
	    {
		    dst[size] = sourc[size];
		    size++;
	    }
    }
    return (dest);
}
// int main(void)
// {
//     char str[5] = "hello";
//     char buffer[3]  = "bye";

//     // // Using memcpy with overlapping memory regions
//     // memcpy(buffer, str, 3);  // Copy 13 bytes from str to buffer
//     // printf("Using memcpy: %s\n", buffer);

//     // ft_memmove(buffer,str,3);
//     // Using me
//     memmove(buffer , str, 3);  // Move 13 bytes from the start of buffer to position buffer+7
//     printf("Using memmove with overlapping regions: %s\n", buffer);

//     return 0;
// }
