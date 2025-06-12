/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-28 09:03:00 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-28 09:03:00 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
// str = one long string // charset = set of sep

int		ft_strlen(char *str);

void	append_str(char *str, char *charset, char **ans);

int		char_in_str(char *str, char c);

char	*loop(int index_sep, int index_last_step, char *str);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		malloc_size;
	char	**ans;

	if (str == NULL || charset == NULL)
	{
		return (0);
	}
	i = 0;
	malloc_size = 0;
	while (str[i] != '\0')
	{
		if (char_in_str(charset, str[i]) >= 0 && i != 0)
		{
			if (!(char_in_str(charset, str[i - 1]) >= 0))
				malloc_size++;
		}
		i++;
	}
	if (!(char_in_str(charset, str[i - 1]) >= 0))
		malloc_size++;
	ans = (char **) malloc(sizeof(char *) * (malloc_size + 1));
	append_str(str, charset, ans);
	return (ans);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	char_in_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	append_str(char *str, char *charset, char **ans)
{
	int		index_sep;
	int		index_last_step;
	int		i;
	int		arr_i;

	index_sep = 0;
	index_last_step = 0;
	i = 0;
	arr_i = 0;
	while (i <= ft_strlen(str))
	{
		if ((char_in_str(charset, str[i]) >= 0 || str[i] == '\0') && i != 0)
		{
			index_sep = i;
			if (!(char_in_str(charset, str[i - 1]) >= 0))
			{
				ans[arr_i] = loop(index_sep, index_last_step, str);
				arr_i++;
			}
			index_last_step = i + 1;
		}
		i++;
	}
}

char	*loop(int index_sep, int index_last_step, char *str)
{
	char	*temp;
	int		arr_j;

	arr_j = 0;
	temp = malloc(index_sep - index_last_step + 1);
	while (index_last_step < index_sep)
	{
		temp[arr_j] = str[index_last_step];
		index_last_step++;
		arr_j++;
	}
	temp[arr_j] = '\0';
	return (temp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**ans;
// 	int		i;

// 	i = 0;
// 	ans = ft_split("1    :     2\n3         :        4", ": \n");
// 	while (i < 4)
// 	{
// 		printf("ans[i] = %s\n", ans[i]);
// 		free(ans[i]);
// 		i++;
// 	}
// 	free(ans);
// 	return (0);
// }
