/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-26 19:01:11 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-26 19:01:11 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
// **strs is a bunch of stings
// size is how many string in strs
// seperator

char	*ft_strcat(char *dest, char *src);

char	*ft_size_zero(void);

int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*end;
	int		len_of_each_strs;
	int		i;

	if (size == 0 || sep == 0)
		return (ft_size_zero());
	i = 0;
	len_of_each_strs = 0;
	while (i < size)
	{
		len_of_each_strs += ft_strlen(strs[i]);
		i++;
	}
	end = malloc(sizeof(char)
			* (len_of_each_strs + (ft_strlen(sep) * (size - 1)) + 1));
	i = 0;
	end[0] = '\0';
	while (i < size)
	{
		ft_strcat(end, strs[i]);
		if (i != size - 1)
			ft_strcat(end, sep);
		i++;
	}
	return (end);
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;
	int	len_src;
	int	end;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	end = len_dest + len_src;
	while (len_dest < end)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

char	*ft_size_zero(void)
{
	char	*end;

	end = (char *) malloc(sizeof(char));
	*end = '\0';
	return (end);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*arr[] = {"aff","fsefe","sfseff"};
// 	char	*sep = "";
// 	int		size = sizeof(arr) / sizeof(arr[0]);
// 	char	*end;

// 	end = ft_strjoin(size, arr, sep);
// 	printf("%s\n", end);
// 	free(end);
// 	return (0);
// }
