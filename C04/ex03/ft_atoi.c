/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-24 06:28:17 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-24 06:28:17 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	negative;
	int	ans;

	negative = 1;
	ans = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			negative *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = (ans * 10) + *str - '0';
		str++;
	}
	return (ans * negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d",ft_atoi("0"));
// }
