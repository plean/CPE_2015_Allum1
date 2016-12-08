/*
** debug.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 00:07:55 2016 Jean PLANCHER
** Last update Sun Feb 21 17:55:50 2016 Jean PLANCHER
*/

#include "my.h"

void	do_reach_refresh2(t_prog_base *base, int *refresh, int nb)
{
  if (nb <= base->matches_per_lines[base->line - 1] -
      base->nb_deleted[base->line - 1] && nb != 0)
    {
      aff_promt(base);
      if (base->is_ended == 1)
	return ;
    }
  else
    {
      if (nb == 0)
	my_putstr("Error: you have to remove at least one match", 1);
      else
	my_putstr("Error: not enough matches on this line", 1);
      *refresh = 0;
    }
}

void	do_reach(t_prog_base *base, int *refresh, int nb)
{
  if (*refresh == 0 && !base->is_ended)
    my_putstr("\nLine: ", 1);
  else if (*refresh == 1)
    {
      if (nb <= base->nb_lines && nb != 0 && base->is_empty[nb - 1] == 0)
	my_putstr("Matches: ", 1);
      else
	{
	  if (nb <= 0 || nb > base->nb_lines)
	    my_putstr("Error: this line is out of range", 1);
	  else
	    my_putstr("Error: this line is empty", 1);
	  *refresh = 0;
	}
    }
  else if (*refresh == 2)
    {
      do_reach_refresh2(base, refresh, nb);
      if (base->is_ended == 1)
	return ;
    }
}
