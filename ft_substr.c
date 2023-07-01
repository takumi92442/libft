/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:17:55 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 11:35:39 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (len != 0)
	{
		s_len = ft_strlen(s);
		if (s_len < start)
			len = 0;
		if (s_len - start < len)
			len = s_len - start;
	}
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	substr[len] = '\0';
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
