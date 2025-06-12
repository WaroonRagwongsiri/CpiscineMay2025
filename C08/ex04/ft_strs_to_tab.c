/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-29 08:39:19 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-29 08:39:19 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

char				*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*new;
	int				i;

	i = 0;
	new = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (new == NULL)
		return (NULL);
	while (i < ac)
	{
		new[i].size = ft_strlen(av[i]);
		if (av[i] == NULL)
		{
			return (NULL);
		}
		else
		{
			new[i].str = av[i];
			new[i].copy = ft_strdup(av[i]);
		}
		i++;
	}
	new[i].str = 0;
	return (new);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	if (src == 0)
		return (0);
	new = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
