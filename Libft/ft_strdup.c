/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:38:49 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:51 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strdup(const char *s)
{
	char	*new_s;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_s = malloc(sizeof(char) * size);
	if(!new_s)
		return(NULL);
	new_s = ft_memcpy(new_s,s,size);
	return(new_s);
}

// int main()
// {
// 	char *s = "Hello";

// 	char *new_s = ft_strdup(s);
// 	printf("%s",new_s);
// }
