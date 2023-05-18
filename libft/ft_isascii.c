/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:33:26 by marvin            #+#    #+#             */
/*   Updated: 2023/05/18 13:33:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c);

int ft_isascii(int c)
{
    if(c>=0&&c<=127)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

// #include<stdio.h>
// int main()
// {
//     printf("%d %d",ft_isascii(127),ft_isascii(234));
//     return (0);
// }