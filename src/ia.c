/*
** ia.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 00:07:52 2016 Jean PLANCHER
** Last update Sun Feb 21 18:18:16 2016 Jean PLANCHER
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	find_line(t_prog_base *base)
{
  int	i;

  i = -1;
  while (base->is_empty[++i]);
  return (i + 1);
}

int	xor_all_pile(t_prog_base *base)
{
  int	i;
  int	k;

  i = -1;
  k = 0;
  while (++i < base->nb_lines)
    {
      if (i == base->line - 1)
	k ^= (base->matches_per_lines[i] - base->nb_deleted[i]) - base->matches;
      else
	k ^= (base->matches_per_lines[i] - base->nb_deleted[i]);
    }
  return (k);
}

int	one_line(t_prog_base *base)
{
  int	i;
  int	k;
  int	e;

  i = -1;
  k = 0;
  e = find_line(base) - 1;
  while (++i < base->nb_lines)
      if (base->matches_per_lines[i] - base->nb_deleted[i] > 1)
	{
	  if (k == 1)
	    return (1);
	  e = i;
	  k++;
	}
  base->line = e + 1;
  base->matches = base->matches_per_lines[e] - base->nb_deleted[e];
  base->matches += (xor_all_pile(base) == 0) ? -1 : 0;
  if (base->matches <= 0)
    base->matches = 1;
  return (0);
}

void	my_ia(t_prog_base *base)
{
  if (!one_line(base))
    return ;
  base->line = find_line(base);
  base->matches = 1;
  if (rand() % 100 <= base->difficulty)
    while (xor_all_pile(base) != 0)
	{
	  base->matches++;
	  if (base->matches > base->matches_per_lines[base->line - 1] -
	      base->nb_deleted[base->line - 1])
	    {
	      base->matches = 1;
	      while (base->is_empty[++base->line + 1]);
	      if (base->line > base->nb_lines)
		{
		  base->line = find_line(base);
		  return ;
		}
	    }
	}
}
