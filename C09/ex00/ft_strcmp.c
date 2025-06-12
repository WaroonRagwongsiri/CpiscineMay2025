/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 08:04:13 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 08:04:13 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strlen(char *s);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
	{
		return (s1[0] - s2[0]);
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s1 = "ABA";
// 	char *s2 = "ABAAs";
// 	printf("strcmp = %d\n",strcmp(s1,s2));
// 	printf("ft_strcmp = %d\n",ft_strcmp(s1,s2));
// 	return (0);
// }
