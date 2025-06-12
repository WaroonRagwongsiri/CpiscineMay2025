/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 19:58:18 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 19:58:18 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	sort_str_arr(char **arr, int size);

void	ft_sort_string_tab(char **tab)
{
	int		len;

	len = 0;
	if (tab == 0)
		return ;
	while (tab[len])
		len++;
	sort_str_arr(tab, len);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str == 0)
	{
		return (0);
	}
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
	{
		return (s1[0] - s2[0]);
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_str_arr(char **arr, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int		i;

// 	i = 0;
// 	ft_sort_string_tab(argv);
// 	while (i < argc)
// 	{
// 		printf("%d: %s\n", i, argv[i]);
// 		i++;
// 	}
// 	return (0);
// }
