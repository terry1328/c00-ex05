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

void	ft_print_comb(void)
{
	char	e;
	char	f;
	char	g;

	e = '0';
	while (e <= '7')
	{
		f = e;
		while (++f  <= '8')
		{
			g = f+ 1;
			while (g <= '9')
			{
				ft_putchar(e);
				ft_putchar(f);
				ft_putchar(g);
				if (e != '7' || f != '8' || g != '9')
				{
					write(1, ", ", 2);
				}
				g++;
			}
		}
		e++;
	}
}
