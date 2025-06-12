/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 20:11:08 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 20:11:08 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
// size is size of dest at the end after cat this size also include '\0'
int				ft_strlen(char *s);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d >= size)
	{
		return (len_s + size);
	}
	i = 0;
	while ((i + len_d) < size - 1 && src[i] != '\0')
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
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

// int main()
// {
// 	char first2[] = "ABC";
//     char last2[] = "ABCDEF";
//     int size = 2;
// 	printf("ft_strlcat %d\n",ft_strlcat(first2,last2,size));
// 	printf("ft_strlcat %s\n",first2);
//     return(0);
// }

// size_t strlcat(char *dst, const char *src, size_t siz)
// {
//         size_t ld = strlen(dst);
//         size_t ls = strlen(src);
//         if (ld >= siz)
//              return 0;
//         if (ld + ls >= siz)
//             ls = siz - ld -1;
//         strncat(dst, src, ls);
//         return ld + ls; 
// }
