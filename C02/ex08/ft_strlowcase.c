/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 05:12:14 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 05:12:14 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "AWFAF";
// 	char test2[] = "AFS325";
// 	char test3[] = "abcAEF35";

// 	ft_strlowcase(test1);
// 	ft_strlowcase(test2);
// 	ft_strlowcase(test3);
// 	printf("%s",test1);
// 	printf("%s",test2);
// 	printf("%s",test3);
// 	return (0);
// }
