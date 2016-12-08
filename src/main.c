/*
** main.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Feb 16 23:43:38 2016 Jean PLANCHER
** Last update Tue Feb 23 15:13:47 2016 Jean PLANCHER
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	free_base(t_prog_base *base)
{
  free(base->matches_per_lines);
  free(base->nb_deleted);
}

int	init_base(t_prog_base *base)
{
  int	i;

  base->nb_lines = 4;
  base->difficulty = 100;
  if (!(base->matches_per_lines = malloc(sizeof(int) * base->nb_lines)) ||
      !(base->nb_deleted = malloc(sizeof(int) * base->nb_lines)) ||
      !(base->is_empty = malloc(sizeof(int) * base->nb_lines)))
    {
      my_putstr("Malloc failed.\n", 2);
      return (0);
    }
  i = -1;
  while (++i < base->nb_lines)
    {
      base->matches_per_lines[i] = i * 2 + 1;
      base->nb_deleted[i] = 0;
      base->is_empty[i] = 0;
    }
  base->is_ended = 0;
  return (1);
}

int		main()
{
  t_prog_base	base;

  init_base(&base);
  print_screen(&base);
  my_putstr("\nYour turn:", 1);
  aff_game(&base);
  free_base(&base);
  return (0);
}
