/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 16:13:42 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 16:13:42 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int		ft_strlen(char *s);

char	*ft_find_substrng(int i, char *str, char *to_find, int len_to_find);\
//ans = (int *)0; one way to do null;

char	*ft_strstr(char *str, char *to_find)
{
	char	*ans;
	int		i;
	int		len_to_find;

	ans = NULL;
	len_to_find = ft_strlen(to_find);
	i = 0;
	if (len_to_find == 0)
		return (&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			ans = ft_find_substrng(i, str, to_find, len_to_find);
		}
		i++;
	}
	return (ans);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_find_substrng(int i, char *str, char *to_find, int len_to_find)
{
	int	j;

	j = 0;
	while (j < len_to_find)
	{
		if (str[i + j] != to_find[j])
			return (NULL);
		j++;
	}
	if (j == len_to_find)
	{
		return (&str[i]);
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "FeeeafeafeafnoineneisonvsvnsnvsvnsjvnsjvnsjvnFeed";
// 	char to_find[] = "Feed";
// 	char *ans;

// 	ans = ft_strstr(str,to_find);
// 	printf("%s",ans);
// 	return (0);
// }
