/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:13:20 by taksato           #+#    #+#             */
/*   Updated: 2023/06/07 18:46:01 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long JudgeMax(long int sum,int number)
{
	long max = LONG_MAX/10;
	long difference;
	difference = 0;
	if(max < sum)
		return LONG_MAX;
	difference = LONG_MAX - sum*10;
	if(difference - number > 0)
		return sum*10 + number;
	else
	{
		return LONG_MAX;
	}
}

long JudgeMin(long int sum,int number)
{
	long min = LONG_MIN/10;
	long difference;
	difference = 0;
	if(min > sum)
		return LONG_MIN;
	difference = LONG_MIN - sum*10;
	if(difference - number > 0)
		return LONG_MIN;
	else
	{
		return sum*10 + number;
	}
}

int ft_atoi(const char *str)
{
	int i;
	i = 0;
	int judge;
	judge = 0;
	long int sum;
	sum = 0;
	while(str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			judge = 1;
		i++;
	}
	while (str[i] >='0' && str[i] <= '9')
	{
		if(judge == 1)
		{
			sum = JudgeMin(sum,-(str[i]-'0'));
		}
		else
		{
			sum = JudgeMax(sum,str[i]-'0');
		}
		i++;
	}
	return sum;
}

//  #include <stdlib.h>
// int    main(void)
// {
//     char str[100] =  "        214748";
//     int num;

//     // 文字列型からint型への変換
//     num = ft_atoi(str);
//     printf("int型変数numの値は: %d\n", num);

//     return (0);
// }