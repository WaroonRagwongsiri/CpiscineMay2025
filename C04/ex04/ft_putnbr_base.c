/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-24 08:00:31 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-24 08:00:31 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		has_duplicates(char *str);

int		has_invalid(char *str);

int		ft_strlen(char *str);

void	ft_putnbr_base_min(long nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (len_base == 0 || len_base == 1 || *base == 0
		|| has_duplicates(base) == 0 || has_invalid(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base_min(2147483648, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > len_base - 1)
	{
		ft_putnbr_base((nbr / len_base), base);
		ft_putnbr_base((nbr % len_base), base);
	}
	else
		write(1, &(base[nbr % len_base]), 1);
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

int	has_duplicates(char *str)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(str);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	has_invalid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_min(long nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (nbr > len_base - 1)
	{
		ft_putnbr_base_min((nbr / len_base), base);
		ft_putnbr_base_min((nbr % len_base), base);
	}
	else
		write(1, &(base[nbr % len_base]), 1);
}

// #include <stdio.h>
// #include <limits.h>

// int	main()
// {
// 	int a;

// 	a = 0;
// 	printf("%d\n",a);
// 	ft_putnbr_base(a, "0");
// 	return (0);
// }
