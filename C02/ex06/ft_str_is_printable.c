/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 04:14:45 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 04:14:45 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_strlen(const char *s);

int	ft_str_is_printable(char *str)
{
	int	ans;
	int	i;
	int	len;

	len = ft_strlen(str);
	ans = 1;
	if (len == 0)
	{
		return (ans);
	}
	i = 0;
	if (str[i] < 32 || str[i] == 127)
	{
		ans = 0;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ans = 0;
		}
		i++;
	}
	return (ans);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "";
// 	char test2[] = "\t\n\v\r";
// 	char test3[] = "normal text xoxo";

// 	printf("%d",ft_str_is_printable(test1));
// 	printf("%d",ft_str_is_printable(test2));
// 	printf("%d",ft_str_is_printable(test3));
// 	return (0);
// }
