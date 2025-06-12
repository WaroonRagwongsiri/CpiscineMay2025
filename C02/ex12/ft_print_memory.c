/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-21 07:03:29 by waragwon          #+#    #+#             */
/*   Updated: 2025-05-21 07:03:29 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	int test;
	int *ptr;

	test = 20;
	ptr = &test;
	ft_print_memory((void *) ptr,sizeof(test));
	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		printed;
	unsigned int		i;
	const unsigned char	*pc;
	int g;

	i = 0;
	pc = addr;
	while (i <size)
	{
		g = (pc[i] >> 4) & 0xf;
		if (g >= 10)
		{
			g += 'a' - 10;
		}else{
			g += '0';
		}
		write(1,&g,1);
		printed++;
		g = pc[i] & 0xf;
		if (g >= 10)
		{
			g += 'a' - 10;
		}
		else{
			g += '0';
		}
		write(1,&g,1);
		printed++;
		if (printed % 32 == 0)
		{
			write(1,"\n",1);
		}else if (printed % 4 == 0)
		{
			write(1," ",1);
		}
		i++;
	}
	
	printed = 0;
}
