/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 04:29:11 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-22 04:29:11 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_comb(char a, char b, char c);

void	ft_print_comb(void);

void	print_comb(char a, char b, char c)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				print_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }