/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:17:58 by cholee            #+#    #+#             */
/*   Updated: 2022/08/21 16:52:37 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(last);
				if (first != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				last++;
			}
		second++;
		}
first++;
	}
}
