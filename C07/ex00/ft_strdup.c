/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 16:23:57 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 16:23:57 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	if (src == 0)
		return (0);
	new = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*new;
// 	char	*src;
// 	// char	*new_strdup;

// 	src = "TES";
// 	// new_strdup = strdup(src);
// 	new = ft_strdup(src);
// 	printf("src = %s\n",src);
// 	// printf("strdup = %s\n",new_strdup);
// 	printf("ft_strdup = %s\n",new);
// 	free(new);
// 	// free(new_strdup);
// 	return (0);
// }
