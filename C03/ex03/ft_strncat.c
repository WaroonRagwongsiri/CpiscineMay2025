/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 14:52:28 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 14:52:28 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		ft_strlen(char *s);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	end;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (nb > len_src)
	{
		nb = len_src;
	}
	end = len_dest + nb;
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
// 	ft_strncat(str1,str2,4);
// 	printf("%s",str1);
// 	return (0);
// }
