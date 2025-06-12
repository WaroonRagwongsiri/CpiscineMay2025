/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 05:20:06 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 05:20:06 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
			&& str[i + 1] != '\0')
		{
			if (str[i + 1] != '\0')
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= ('a' - 'A');
				}
			}
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char test3[] = "abc fEF 35f";

// 	ft_strcapitalize(test1);
// 	ft_strcapitalize(test3);
// 	printf("%s",test1);
// 	printf("%s",test3);
// 	return (0);
// }
