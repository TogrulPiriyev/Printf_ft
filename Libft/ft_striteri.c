/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:04:12 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:44 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;

	i = 0;

	while(s[i]!='\0')
	{
		(*f)(i,&s[i]);
		i++;
	}
}

// void example_func(unsigned int i, char *c)
// {
// 	*c = (char)(*c + i);
// }

// int main()
// {
// 	char str[] = "Hello, World!";

// 	ft_striteri(str, example_func);

// 	printf("%s\n", str);

// 	return 0;
// }
