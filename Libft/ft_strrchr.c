/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:45:21 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:52:56 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:28:46 by toghrul           #+#    #+#             */
/*   Updated: 2023/10/29 21:44:58 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    char    d;

    d = s[0];
    while(*s !='\0')
        s++;
    while(*s != d)
    {
        if(*s == c)
            return((char*)s);
        s--;
    }
    return(NULL);
}

// int main()
// {
//     char *st = "hedello";

//     printf("%s",ft_strrchr(st,'o'));

// }
