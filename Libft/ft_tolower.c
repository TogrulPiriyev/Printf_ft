/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:14:21 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:52:23 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_tolower(int c)
{
    if(c>=65 && c<=90)
    {
        c = c + 32;
    }
    return(c);
}

// int main()
// {
//     // char d = 'D';
//     char uppercaseLetters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

//     int i = 0;
//     while(uppercaseLetters[i]!='\0')
//     {
//         printf("%c",ft_tolower(uppercaseLetters[i]));
//         i++;
//     }
//     // printf("%c",ft_tolower(d));
// }
