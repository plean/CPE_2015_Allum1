/*
** my_getnbr.c for  in /home/planch_j/rendu/PSU/PSU_2015_minitalk/lib/my
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Feb  2 16:14:04 2016 Jean PLANCHER
** Last update Tue Feb  2 16:17:17 2016 Jean PLANCHER
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  nb = 0;
  i = -1 + (str[0] == '-');
  while (str[++i])
    nb = nb * 10 + (str[i] - 48);
  return (nb * (2 * (str[0] != '-') - 1));
}
