/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 04:25:37 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 04:25:37 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "abc";
// 	char test2[] = "abc325";
// 	char test3[] = "abcAEF35";

// 	ft_strupcase(test1);
// 	ft_strupcase(test2);
// 	ft_strupcase(test3);
// 	printf("%s",test1);
// 	printf("%s",test2);
// 	printf("%s",test3);
// 	return (0);
// }
