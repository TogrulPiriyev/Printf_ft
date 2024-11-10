/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toghrul <toghrul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:33:53 by toghrul           #+#    #+#             */
/*   Updated: 2023/11/17 02:56:38 by toghrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <libft.h>

int power(int digit,int power)
{
	int dup;

	dup = 1;
	while(digit - 1>0)
	{
		dup *= power;
		digit--;
	}
	return(dup);
}

int	ft_atoi(const char *nptr)
{
	int	count;
	int	i;
	int	digit;
	int	negative;

	count = (int)ft_strlen(nptr);
	digit = 0;
	i = 0;
	negative = 0;
	if(nptr[0]=='-')
	{
		negative = 1;
		i = 1;
		count = count - 1;
	}
	if(!ft_isdigit(nptr[i]))
		return(0);
	while(nptr[i]!='\0')
	{
		digit += (nptr[i] - 48 ) * (power(count,10));
		count--;
		i++;
	}
	if(negative == 1)
		digit*=-1;
	return(digit);
}

// int main()
// {
// 	printf("%d,",atoi("2147483650"));
// 	printf("%d",ft_atoi("2147483650"));
// 	return(0);
// }
