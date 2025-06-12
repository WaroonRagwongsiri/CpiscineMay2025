/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 04:07:19 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 04:07:19 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
// 	char test3[] = "awdwagege";

// 	printf("%d",ft_str_is_lowercase(test1));
// 	printf("%d",ft_str_is_lowercase(test2));
// 	printf("%d",ft_str_is_lowercase(test3));
// 	return (0);
// }
