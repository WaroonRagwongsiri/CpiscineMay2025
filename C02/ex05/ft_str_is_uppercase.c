/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 04:13:19 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 04:13:19 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			ans = 0;
		}
		i++;
	}
	return (ans);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "";
// 	char test2[] = "wadwSgsg234";
// 	char test3[] = "EEGSG";

// 	printf("%d",ft_str_is_uppercase(test1));
// 	printf("%d",ft_str_is_uppercase(test2));
// 	printf("%d",ft_str_is_uppercase(test3));
// 	return (0);
// }
