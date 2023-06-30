/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:43:50 by taksato           #+#    #+#             */
/*   Updated: 2023/06/30 20:49:41 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A')||(c>='a'&&c<='z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
