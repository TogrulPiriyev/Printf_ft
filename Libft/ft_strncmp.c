/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:55:30 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:08 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(s1[i] != '\0' || i < n && n != 0)
    {
        if(s1[i] == s2[i])
            i++;
        else if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
    }
    return (0);
}



// int main()
// {
//     char *st = "htrge";
//     char *st2 = "";

//     printf("%d",strncmp(st,st2,0));
//     printf("%d",ft_strncmp(st,st2,0));

// }
