/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:08:34 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/17 08:11:12 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(c)
{
  write(1, &c, 1);
}
void rush(int h, int v)
{
  int hor;
  int hor1;
  int ver;
  hor = 1;
  hor1 = 2;
  ver = 1;
  char corner;
  char corner1;
  corner = '/';
  corner1 = '\\';
  char sidesv;
  char space;
  char sidesh;
  sidesv = '*';
  sidesh = '*';
  space = ' ';
  while(ver <= v)
  {
    while(hor <=  h)
    {
      if((( hor==1)&& (ver == 1))||((ver == v)&&(hor == h)))
    	ft_putchar(corner);
      else if (((hor==h)&& (ver == 1))||((hor == 1)&&(v == ver)))
      	ft_putchar(corner1);
      else if (((hor != 1)||(hor != h))&&( (ver == 1)||(ver == v)))
      {
        ft_putchar(sidesv);
      }
     else if (((hor == 1)||(hor == h))&&((ver != 1)||(ver != v)))
		{
			ft_putchar(sidesv);
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
int main()
{
  int v;
  int h;
  v = 4;
  h = 4;
  rush(h , v);
  return(0);
}
