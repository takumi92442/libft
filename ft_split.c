/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:03:59 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 02:55:19 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t word_count(char const *s, char c)
{
    size_t count;
    
    count = 0;
    if(s == NULL)
        return 0;
    while(*s!='\0')
    {
        if(*s != c)
            count++;
        while (*s != c &&  *s != '\0')
            s++;
        while (*s == c && *s != '\0')
            s++;
    }
    return count;
}

static void	memory_free(char **pp, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(pp[i]);
        i++;
	}
	free(pp);
}

static char *arrangement_make(char **pp, size_t pp_i, size_t word_len)
{
    char *p;
    
    p = ft_calloc(word_len,sizeof(char));
    if(!p)
    {
        memory_free(pp, pp_i);
        return NULL;
    }
    return p;
}

static char** arrangement_in(char *str, char **pp, char c)
{
    size_t pp_i;
    char *p;
    size_t p_len;
    
    pp_i = 0;
    while(*str != '\0')
    {
        if(*str != c)
        {
            p = NULL;
			p_len = 0;
			while (str[p_len] != c && str[p_len] != '\0')
				p_len++;
			p = arrangement_make(pp, pp_i, p_len);
			if (p == NULL)
				return (NULL);
			ft_strlcpy(p, str, p_len + 1);
			pp[pp_i] = p;
            pp_i++;
            str += p_len;
		}
        else
        {
            str++;    
        }
    }
    return pp;
}

char	**ft_split(char const *s, char c)
{
	char	**pp;
	size_t	pp_len;
	char	*str;

	str = (char *)s;
	pp_len = word_count(str, c);
	pp = ft_calloc(pp_len + 1, sizeof(char *));
	if (pp == NULL)
		return (NULL);
	pp[pp_len] = (char *) NULL;
	if (str == NULL)
		return (pp);
	pp = arrangement_in(str, pp, c);
	return (pp);
}


// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*nullstr;
// 	char	c1;
// 	char	c2;
// 	char	c3;
// 	int		i;
// 	char	**lst;

// 	s1 = "split  ||this|for|me|||||!|";
// 	s2 = "#The#quick##brown###fox#####jumps#over#the#lazy#dog.#";
// 	s3 = "\0abcdefg\012345678\0";
// 	nullstr = NULL;
// 	c1 = '|';
// 	c2 = '#';
// 	c3 = '\0';
// 	printf("\n*s = %s\n", s1);
// 	printf("dl = %c\n", c1);
// 	lst = ft_split(s1, c1);
// 	if (lst == NULL)
// 		printf("lst = NULL\n");
// 	else
// 	{
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			printf("para = %s\n", lst[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			free(lst[i]);
// 			i++;
// 		}
// 		free(lst);
// 	}
// 	printf("\n*s = %s\n", s2);
// 	printf("dl = %c\n", c2);
// 	lst = ft_split(s2, c2);
// 	if (lst == NULL)
// 		printf("lst = NULL\n");
// 	else
// 	{
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			printf("para = %s\n", lst[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			free(lst[i]);
// 			i++;
// 		}
// 		free(lst);
// 	}
// 	printf("\n*s = %s\n", s3);
// 	printf("dl = %c\n", c3);
// 	lst = ft_split(s3, c3);
// 	if (lst == NULL)
// 		printf("lst = NULL\n");
// 	else
// 	{
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			printf("para = %s\n", lst[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			free(lst[i]);
// 			i++;
// 		}
// 		free(lst);
// 	}
// 	printf("\n*s = %s\n", nullstr);
// 	printf("dl = %c\n", c1);
// 	lst = ft_split(nullstr, c1);
// 	if (lst == NULL)
// 		printf("lst = NULL\n");
// 	else
// 	{
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			printf("para = %s\n", lst[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			free(lst[i]);
// 			i++;
// 		}
// 		free(lst);
// 	}
	
// 	printf("\n*s = %s\n", "--1-2--3---4----5------42");
// 	printf("dl = %c\n", '-');
// 	lst = ft_split("--1-2--3---4----5------42", '-');
// 	if (lst == NULL)
// 		printf("lst = NULL\n");
// 	else
// 	{
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			printf("para = %s\n", lst[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (lst[i] != NULL)
// 		{
// 			free(lst[i]);
// 			i++;
// 		}
// 		free(lst);
// 	}
// }
