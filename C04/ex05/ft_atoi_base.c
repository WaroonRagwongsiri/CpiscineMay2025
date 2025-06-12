/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-25 05:59:19 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-25 05:59:19 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str);

int	ft_strchr(char *str, char c);

int	has_duplicates(char *str);

int	loop(char *base, char *str, int j);

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	negative;
	int	j;

	negative = 1;
	j = 0;
	len_base = ft_strlen(base);
	if (len_base == 0 || len_base == 1 || *base == 0
		|| has_duplicates(base) == 0
		|| ft_strchr(base, '+') == 0 || ft_strchr(base, '-') == 0
		|| ft_strchr(base, ' ') == 0 || (*base >= 11 && *base <= 15))
		return (0);
	while (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13))
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
		{
			negative *= -1;
		}
		j++;
	}
	return (loop(base, str, j) * negative);
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

int	ft_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
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

int	loop(char *base, char *str, int j)
{
	int	ans;
	int	i;
	int	len_base;

	ans = 0;
	len_base = ft_strlen(base);
	while (ft_strchr(base, str[j]) == 0 && str[j] != '\0')
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (base[i] == str[j])
				break ;
			i++;
		}
		ans = (ans * len_base) + i;
		j++;
	}
	return (ans);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*base;

// 	str = " ---+--+101010";
// 	base = "01";
// 	printf("%d",ft_atoi_base(str, base));
// 	return (0);
// }
