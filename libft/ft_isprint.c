/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:46:48 by marvin            #+#    #+#             */
/*   Updated: 2023/05/18 13:46:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isprint(int c);

int ft_isprint(int c)
{
    if(c>=32&&c<=126)
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
//     for(int i =0;i<150;i++){
//         printf("%d %d\n",i,ft_isprint(i));
//     }
//     return 0;
// }