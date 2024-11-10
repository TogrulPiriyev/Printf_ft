/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:02:28 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:52:49 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


// int	chg_start(char const *s1, char const *set)
// {
// 	int		start;
// 	int		startpos;
// 	int		count;
// 	int		start2;

// 	start = 0;
// 	count = 0;
// 	startpos = 0;
// 	while(s1[start]!='\0' || startpos>count)
// 	{
// 		start2 = 0;
// 		while(set[start2]!='\0')
// 		{
// 			if(set[start2]==s1[startpos])
// 			{
// 				startpos++;
// 				count++;
// 			}
// 			start2++;
// 		}
// 		if(startpos==0 )
// 			break;
// 		start++;
// 	}
// 	return(startpos);
// }

// int chg_end(char const *s1,char const *set)
// {
// 	int	start3;
// 	int	start2;
// 	int	count;
// 	int	end;

// 	start3 = 0;
// 	count = 0;
// 	end =(int)ft_strlen(s1);
// 	while(s1[start3]!='\0' || (int)ft_strlen(s1) - end > count)
// 	{
// 		start2 = 0;
// 		while(set[start2]!='\0')
// 		{
// 			if(set[start2]==s1[end-1])
// 			{
// 				end--;
// 				count++;
// 			}
// 			start2++;
// 		}
// 		if(end==(int)ft_strlen(s1) )
// 			break;
// 		start3++;
// 	}
// 	return(end);
// }
static int	is_set_char(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return 1;
		set++;
	}
	return 0;
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t 	start;
	size_t	end;
	char	*trimmed;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (is_set_char(s1[start], set))
		start++;
	while (end > start && is_set_char(s1[end - 1], set))
		end--;

	trimmed = malloc(sizeof(end-start) * sizeof(s1));
	if(!trimmed)
		return(NULL);
	while(start<end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i]='\0';
	return(trimmed);
}

// int main()
// {
// 	char *s = "4234Hell124";
// 	char *s2 = "42";
// 	char *s3 = ft_strtrim(s,s2);
// 	printf("%s",s3);
// 	return(0);
// }

