/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 12:46:33 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 12:46:33 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

int		ft_strlen(char *s);

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

// int	main(void)
// {
// 	char str1[] = "abc";
// 	char str2[] = "defgh";

// 	ft_strcat(str1, str2);
// 	printf("%s",str1);
// 	return (0);
// }
