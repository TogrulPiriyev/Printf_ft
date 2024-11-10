/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:01:56 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:55:42 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <libft.h>

int	count_c(int dup)
{
	int c;

	c = 0;
	if(dup==0)
		return(1);
	while(dup>0)
	{
		dup-=dup%10;
		dup/=10;
		c++;
	}
	return(c);
}

char *rev_str(int minus,int count,int n)
{
	char	str;
	int		i;
	char	*number;

	i = 0;
	if(minus == 1)
	{
		count += 1;
		number = (char*)ft_calloc(count,sizeof(char));
		number[count-1]='-';
	}
	else
		number = (char*)ft_calloc(count,sizeof(char));
	while(number[i]!='\0')
	{
		if(minus==1 && i+1==count)
			break;
		str = n%10+48;
		n=(n-n%10)/10;
		number[i]=str;
		i++;
	}
	return(number);
}
char *ft_itoa(int n)
{
	char	*number;
	int		i;
	int		count;
	char	*new_num;
	int		minus;
	if(n<0)
	{
		n=n*(-1);
		minus = 1;
	}
	if(n==-2147483648)
		return("-2147483648");
	count = count_c(n);
	number = rev_str(minus,count,n);
	new_num = (char*)ft_calloc(count,sizeof(char));
	i = 0;
	while(0 <=count)
	{
		if(minus==1)
			new_num[i]=number[count];
		else
			new_num[i]=number[count-1];
		i++;
		count--;
	}
	return(new_num);
}

int	main(void)
{
	printf("%s",ft_itoa(0));
	return(0);
}
