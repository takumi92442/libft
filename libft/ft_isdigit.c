/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:14:10 by taksato           #+#    #+#             */
/*   Updated: 2023/05/16 16:25:35 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isdigit(int c);

int	isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d %d\n",isdigit('i'),isdigit('9'));
// 	return (0);
// }