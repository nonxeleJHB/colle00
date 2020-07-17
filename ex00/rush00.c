/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:06:31 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/17 08:18:13 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void rush(int h, int v)
{
	int hor;
	int ver;
	hor = 1;
	ver = 1;
	char corner;
	corner = 'b';
	char sidesv;
	char space;
	char sidesh;
	sidesv = '-';
	sidesh = '|';
	space = ' ';

	while(ver <= v)
	{
		while(hor <=  h)
		{
			if(((hor==1)|| (hor == h))&&((ver == 1)||(v == ver)))
			{
				ft_putchar(corner);
			}
			else if (((hor != 1)||(hor != h))&&( (ver == 1)||(ver == v)))
			{
				ft_putchar(sidesv);
			}
			else if (((hor == 1)||(hor == h))&&((ver != 1)||(ver != v)))
			{
				ft_putchar(sidesh);
			}
			else
			{
				ft_putchar(space);
			}
			hor++;

		}
		write(1, "\n", 1);
		hor = 1;
		ver = ver +1;
	}


}
