/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:16:21 by marvin            #+#    #+#             */
/*   Updated: 2023/05/18 13:16:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c);

int ft_isalnum(int c)
{
    if(c>=48&&c<=9||c>=65&&c<=90||c>=97&&c<=122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
// #include<stdio.h>

// int main(){
//     printf("%d  %d",ft_isalnum(123),ft_isalnum(65));
//     return (0);
// }