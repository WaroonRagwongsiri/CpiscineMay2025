/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 18:11:25 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 18:11:25 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int	ft_strlen(char *str);

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (str[len])
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	printf("count: %d\n", ft_count_if(argv + 1, argc - 1, &ft_strlen));
// 	return (0);
// }
