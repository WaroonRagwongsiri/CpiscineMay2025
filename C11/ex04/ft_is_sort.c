/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-03 18:22:31 by waragwon          #+#    #+#             */
/*   Updated: 2025-06-03 18:22:31 by waragwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	des;
	int	asc;

	des = 1;
	asc = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			des = 0;
		i++;
	}
	return (des || asc);
}

// #include <stdio.h>

// int	ft_diff(int a, int b)
// {
//     return (a - b);
// }

// void    ft_print_tab_int(int *tab, int size)
// {
//     int    i;

//     i = 0;
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
// }

// int    main(void)
// {
// 	int	tab1[] = {};
// 	int	tab2[] = {1,2,3,4,5};
// 	int	tab3[] = {5,4,3,2,1};
// 	int	tab4[] = {1};
// 	int	tab5[] = {5,4,6,2,1};
// 	int	tab6[] = {1,4,2,5,6};
// 	int	tab7[] = {-1, 3 + 1, 3};

//     printf("tab1 : ");
//     ft_print_tab_int(tab1, 0);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab1, 0, &ft_diff));

//     printf("\ntab2 : ");
//     ft_print_tab_int(tab2, 5);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab2, 5, &ft_diff));

//     printf("\ntab3 : ");
//     ft_print_tab_int(tab3, 5);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab3, 5, &ft_diff));

// 	printf("\ntab4 : ");
//     ft_print_tab_int(tab4, 1);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab4, 1, &ft_diff));

// 	printf("\ntab5 : ");
//     ft_print_tab_int(tab5, 5);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab5, 5, &ft_diff));

// 	printf("\ntab6 : ");
//     ft_print_tab_int(tab6, 5);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab6, 5, &ft_diff));

// 	printf("\ntab7 : ");
//     ft_print_tab_int(tab7, 3);
//     printf("ft_is_sort : %d\n", ft_is_sort(tab7, 3, &ft_diff));
// 	return(0);
// }
