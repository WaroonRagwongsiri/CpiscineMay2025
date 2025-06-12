/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-27 18:39:34 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-27 18:39:34 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		check_char_in_str(char *str, char c);

int		ft_strlen(char *str);

int		atoi_base(char *nbr, char *base_from, int *neg);

int		len_base(int base10, char *base_to);

void	base10_to_char(int base10, char *base_to, char *ans);

int		has_duplicates(char *str);

char	*ft_strcat(char *dest, char *src);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ans;
	int		neg;
	int		ans_base10;
	int		ans_len;

	if (nbr == NULL || base_from == NULL || base_to == NULL
		|| has_duplicates(base_from) == 0
		|| has_duplicates(base_to) == 0)
	{
		return (0);
	}
	ans_base10 = atoi_base(nbr, base_from, &neg);
	ans_len = len_base(ans_base10, base_to);
	if (neg < 0)
	{
		ans_base10 *= -1;
		ans = malloc(ans_len + 1 + 1);
		ans[0] = '\0';
		base10_to_char(ans_base10, base_to, ans);
		return (ans);
	}
	ans = malloc(ans_len + 1);
	ans[0] = '\0';
	base10_to_char(ans_base10, base_to, ans);
	return (ans);
}

int	check_char_in_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	base10_to_char(int base10, char *base_to, char *ans)
{
	char	current_char[2];

	if (base10 < 0)
	{
		ft_strcat(ans, "-");
		base10 *= -1;
	}
	if (base10 > ft_strlen(base_to) - 1)
	{
		base10_to_char(base10 / ft_strlen(base_to), base_to, ans);
		base10_to_char(base10 % ft_strlen(base_to), base_to, ans);
	}
	else
	{
		current_char[0] = base_to[base10 % ft_strlen(base_to)];
		current_char[1] = '\0';
		ft_strcat(ans, current_char);
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;
	int	len_src;
	int	end;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	end = len_dest + len_src;
	while (len_dest < end)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *test;

// 	test = ft_convert_base("- 0 ", "0123456789", "0123456789ABCDEF");
// 	printf("%s",test);
// 	free(test);
// 	return (0);
// }
