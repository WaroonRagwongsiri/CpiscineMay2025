/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-10 16:28:56 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-10 16:28:56 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int	ans;

	negative = 1;
	ans = 0;
	while (*str == ' ' || (*str >= 11 && *str <= 15))
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
