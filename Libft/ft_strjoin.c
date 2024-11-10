/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:29:19 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:53:37 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full_str;
	int		d;

	d = 0;
	full_str = ft_calloc((int)ft_strlen(s1)+(int)ft_strlen(s2)+1,sizeof(char));
	if(!full_str)
		return(NULL);
	while(*s1!='\0')
	{
		full_str[d] = *s1;
		s1++;
		d++;
	}
	while(*s2!='\0')
	{
		full_str[d] = *s2;
		s2++;
		d++;
	}
	full_str[d] = '\0';
	return(full_str);
}

// int main()
// {
// 	char *s1 = "Hello";
// 	char *s2 = " World";
// 	char *s1pluss2 = ft_strjoin(s1,s2);

// 	printf("%s",s1pluss2);
// 	return(0);
// }
