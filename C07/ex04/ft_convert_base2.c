/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-28 08:31:14 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-28 08:31:14 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi_base(char *nbr, char *base_from, int *neg);

int	check_char_in_str(char *str, char c);

int	len_base(int base10, char *base_to);

int	ft_strlen(char *str);

int	has_duplicates(char *str);

int	atoi_base(char *nbr, char *base_from, int *neg)
{
	int	ans_base10;

	*neg = 1;
	while (*nbr >= 9 && *nbr <= 13)
		nbr++;
	while (*nbr == '+' || *nbr == '-' || *nbr == ' ')
	{
		if (*nbr == '-')
			*neg *= -1;
		nbr++;
	}
	ans_base10 = 0;
	while (check_char_in_str(base_from, *nbr) >= 0 && *nbr != '\0')
	{
		ans_base10 = (ans_base10 * ft_strlen(base_from))
			+ check_char_in_str(base_from, *nbr);
		nbr++;
	}
	return (ans_base10);
}

int	len_base(int base10, char *base_to)
{
	int	base10_for_loop;
	int	ans_len;

	ans_len = 0;
	base10_for_loop = base10;
	while (base10_for_loop > 0)
	{
		base10_for_loop /= ft_strlen(base_to);
		ans_len++;
	}
	return (ans_len);
}

int	has_duplicates(char *str)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(str);
	if (len == 1 || len == 0)
		return (0);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j] || str[i] == '-'
				|| str[i] == '+' || str[i] == ' '
				|| (str[i] >= 9 && str[i] <= 13)
				|| str[j] == '-' || str[j] == '+' || str[j] == ' '
				|| (str[j] >= 9 && str[j] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
