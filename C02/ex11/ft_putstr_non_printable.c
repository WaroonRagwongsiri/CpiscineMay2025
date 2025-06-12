/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 06:39:59 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 06:39:59 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_print_hex(int base10);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return ;
}

void	ft_print_hex(int base10)
{
	if (base10 < 0)
	{
		base10 += 256;
	}
	if (base10 > 16)
	{
		ft_print_hex(base10 / 10);
	}
	else
	{
		base10 %= 16;
		write(1, "0", 1);
		if (base10 > 9)
		{
			base10 = (char) base10 + 87;
			write(1, &base10, 1);
		}
		else
		{
			base10 = (char) base10 + '0';
			write(1, &base10, 1);
		}
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	char test[] = "Hello\nHow\vare\fyou?";

// 	ft_putstr_non_printable(test);
// 	return 0;
// }
