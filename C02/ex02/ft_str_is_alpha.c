/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 03:31:11 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 03:31:11 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue ;
		}
		ans = 0;
		i++;
	}
	return (ans);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "";
// 	char test2[] = "134SFAO";
// 	char test3[] = "awdawfD";

// 	printf("%d",ft_str_is_alpha(test1));
// 	printf("%d",ft_str_is_alpha(test2));
// 	printf("%d",ft_str_is_alpha(test3));
// 	return (0);
// }
