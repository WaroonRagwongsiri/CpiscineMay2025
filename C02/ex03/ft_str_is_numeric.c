/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 03:59:58 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 03:59:58 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	ans;
	int	i;

	i = 0;
	ans = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	char test3[] = "1325532";

// 	printf("%d",ft_str_is_numeric(test1));
// 	printf("%d",ft_str_is_numeric(test2));
// 	printf("%d",ft_str_is_numeric(test3));
// 	return (0);
// }
