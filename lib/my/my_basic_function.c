/*
** my_basic_function.c for  in /home/planch_j/rendu/PSU/PSU_2015_minitalk/lib/my
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Feb  2 16:22:28 2016 Jean PLANCHER
** Last update Wed Feb 17 23:50:57 2016 Jean PLANCHER
*/

#include <unistd.h>

int     my_strlen(char *str)
{
  int   i;

  i = -1;
  while (str[++i]);
  return (i);
}

void    my_putchar(char c, int n)
{
  write(n, &c, 1);
}

void	my_putstr(char *str, int n)
{
  write(n, str, my_strlen(str));
}
