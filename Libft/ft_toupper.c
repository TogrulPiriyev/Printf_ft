/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:14:21 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:52:11 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_toupper(int c)
{
    if(c>=97 && c<=122)
    {
        c = c - 32;
    }
    return(c);
}

// int main()
// {
//     char lowercaseLetters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//     int i = 0;
//     while(lowercaseLetters[i]!='\0')
//     {
//         printf("%c",ft_toupper(lowercaseLetters[i]));
//         i++;
//     }
// }
