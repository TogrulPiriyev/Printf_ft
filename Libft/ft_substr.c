/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:23:23 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:52:26 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc(len * sizeof(char));
	if(!substr || !s || (size_t)start>ft_strlen(s))
		return (NULL);
	while(s[start]!='\0' || i<=len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

int main()
{
	char *str = "Hello World";
	char *substr = ft_substr(str,5,5);
	printf("%s", substr);

	return(0);
}
