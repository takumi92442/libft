/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:28:45 by takumi            #+#    #+#             */
/*   Updated: 2023/06/30 18:38:29 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t len;
    size_t i;

    if (s == NULL)
		return ;
    len = ft_strlen(s);
    i = 0;
    while(i < len)
    {
        write(fd, &s[i], 1);
        i++;
    }
}