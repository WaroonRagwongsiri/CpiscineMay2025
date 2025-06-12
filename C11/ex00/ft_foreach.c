/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 16:01:03 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 16:01:03 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <unistd.h>

// void	putchar(int c)
// {
// 	write(1, &"abcdef"[c], 1);
// }

// int	main(void)
// {
// 	int	arr[] = {5,2,4,5,1,3};
// 	int	size = sizeof(arr) / sizeof(arr[0]);
// 	void(*ptr_f)(int) = &putchar;
// 	ft_foreach(arr, size, ptr_f);
// }
