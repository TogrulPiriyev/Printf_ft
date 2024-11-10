/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:08:03 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:01 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(const char *sentence, const char *object, size_t len)
{
    size_t n;
    size_t obj_len;

    n = 0;
    obj_len = ft_strlen(object);
    while(*sentence != '\0' && len > 0 )
    {
        if(*sentence == *object )
        {
            while(*object !='\0' )
            {
                if(*sentence==*object)
                    n++;
                object++;
                sentence++;
            }
            if(n==obj_len)
                return((char*)sentence-obj_len);
        }
        sentence++;
        len--;
    }
    return(NULL);
}

// int main(void)
// {
//     const char *haystack = "Hello, ! This is a test.world";
//     const char *needle = "world";
//     size_t len = 25; // Максимальная длина поиска

//     printf("Подстрока найдена:%s\n", ft_strnstr(haystack, needle, len));
//     // printf("Подстрока найдена:%s\n", strnstr(haystack, needle, len));

//     return(0);
// }
