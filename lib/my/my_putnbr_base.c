/*
** my_putnbr_base.c for  in /home/planch_j/rendu/PSU/PSU_2015_minitalk/lib/my
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Feb  2 16:18:10 2016 Jean PLANCHER
** Last update Wed Feb 17 23:51:29 2016 Jean PLANCHER
*/

#include "my.h"

void	my_putnbr_base(char *str, int nb, int n)
{
  (nb / my_strlen(str) == 0) ? (1) :
      my_putnbr_base(str, nb / my_strlen(str), n);
  (nb < 0) ? my_putchar('-', n) : my_putchar(str[nb % my_strlen(str)], n);
}
