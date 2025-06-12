/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 05:47:11 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 05:47:11 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
//size is just a destination(how long we want at the end) it also include '\0'

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "12456";
// 	char b[5];
// 	ft_strlcpy(b,a,5);
// 	printf("%s",b);
// 	printf("len = %d",ft_strlcpy(b,a,5));
// 	return 0;
// }
