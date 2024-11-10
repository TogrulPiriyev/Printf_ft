/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:28:46 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:57 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strchr(const char *s, int c)
{
    while(*s != '\0')
    {
        if(*s == c)
            return((char*)s);
        s++;
    }
    return(NULL);
}

// int main()
// {
//     char *st = "hello";

//     printf("%s",ft_strchr(st,101));

// }
