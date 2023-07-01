/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:13:20 by taksato           #+#    #+#             */
/*   Updated: 2023/07/01 13:02:32 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	judge_max(long int sum, int number)
{
	long long	max;
	long long	difference;

	max = LONG_MAX / 10;
	difference = 0;
	if (max < sum)
		return (LONG_MAX);
	difference = LONG_MAX - sum * 10;
	if (difference - number > 0)
		return (sum * 10 + number);
	else
		return (LONG_MAX);
}

static long	judge_min(long int sum, int number)
{
	long long	min;
	long long	difference;

	min = LONG_MIN / 10;
	difference = 0;
	if (min > sum)
		return (LONG_MIN);
	difference = LONG_MIN - sum * 10;
	if (difference - number > 0)
		return (LONG_MIN);
	else
	{
		return (sum * 10 + number);
	}
}

static int	judge_minus(const char *str, int i)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			judge;
	long long	sum;

	i = 0;
	judge = 0;
	sum = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	judge = judge_minus(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (judge == 1)
			sum = judge_min(sum, -(str[i] - '0'));
		else
			sum = judge_max(sum, str[i] - '0');
		i++;
	}
	return (sum);
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