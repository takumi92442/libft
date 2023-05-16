/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:43:50 by taksato           #+#    #+#             */
/*   Updated: 2023/05/16 16:12:47 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if (c <= 122 & c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include<stdio.h>
// #include <limits.h>
// int main(void)
// {
//     for (int i = 0; i < UCHAR_MAX; ++i) {
//         if (ft_isalpha(i)) {
//             printf("%c (%x)\n", i, i);
//         }
//     }
// }