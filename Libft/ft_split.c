/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:28:40 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:54:08 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *d,const char *s,int l)
{
	int k;

	k = 0;
	while(k < l)
	{
		d[k] = s[k];
		k++;
	}
	d[l] = '\0';
	return(d);
}

int	len_from_end(char const *s, char c,char const *end)
{
	while (*end != c && *end != '\0')
		end++;
	return(end - s);
}

char	**free_array(char **d,int i)
{
	int	j;

	j = 0;
	while(j < i)
	{
		free(d[j]);
		j++;
	}
	free(d);
	return NULL;
}
char **ft_split(char const *s, char c)
{
	char		**splitted_str;
	int			len;
	int			i;
	const char	*end;

	i = 0;
	splitted_str = (char **)malloc((coss(s,c) + 1) * sizeof(char *));
	if(splitted_str == NULL)
		return (NULL);
	while(*s)
	{
		while(*s==c)
			s++;
		end = s;
		while (*end != c && *end != '\0')
			end++;
		len = end - s;
		splitted_str[i] = (char*)malloc((len+1) *sizeof(char));
		if(splitted_str[i] == NULL)
			return(free_array(splitted_str,i));
		ft_strncpy(splitted_str[i],s,len);
		s = end;
		i++;
	}
	splitted_str[i] = NULL;
	return(splitted_str);
}


int main()
{
	char *s = "He,e,l,l,o";
	char c = ',';
	char **d = ft_split(s,c);
	while(*d!=NULL)
	{
		printf("%s",*d);
		d++;
	}
	return(0);

}
