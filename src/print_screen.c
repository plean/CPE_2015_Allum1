/*
** print_screen.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 02:02:37 2016 Jean PLANCHER
** Last update Wed Feb 17 02:26:53 2016 Jean PLANCHER
*/

#include "my.h"

void	aff_begin_or_end(int matches_max)
{
  int	i;

  i = -1;
  while (++i < matches_max * 2 + 1)
    my_putchar('*', 1);
  my_putchar('\n', 1);
}

void	aff_line(int matches_max, int matches, int matches_deleted)
{
  int	i;

  my_putchar('*', 1);
  i = -1;
  while (++i < matches_max - matches / 2 - 1)
    my_putchar(' ', 1);
  i = -1;
  while (++i < matches - matches_deleted)
    my_putchar('|', 1);
  i = -1;
  while (++i < matches_max - matches / 2 - 1 + matches_deleted)
    my_putchar(' ', 1);
  my_putchar('*', 1);
}

void	print_screen(t_prog_base *base)
{
  int	i;

  i = -1;
  aff_begin_or_end(base->nb_lines);
  while (++i < base->nb_lines)
    {
      aff_line(base->nb_lines, base->matches_per_lines[i],
	       base->nb_deleted[i]);
      my_putchar('\n', 1);
    }
  aff_begin_or_end(base->nb_lines);
}
