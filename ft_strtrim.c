/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:23:10 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 11:35:19 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	t;
	size_t	i;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	t = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (t > i && ft_strchr(set, s1[t - 1]))
	{
		t--;
	}
	ptr = ft_calloc(t - i + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[i], t - i + 1);
	return (ptr);
}
