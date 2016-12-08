/*
** is_ended.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 16:41:43 2016 Jean PLANCHER
** Last update Sun Feb 21 14:40:04 2016 Jean PLANCHER
*/

#include <stdlib.h>
#include "my.h"

void	check_end(t_prog_base *base, int player)
{
  int	i;

  i = -1;
  while (++i < base->nb_lines)
    {
      if (!base->is_empty[i])
	return ;
    }
  if (player == 1)
    my_putstr("You lost, too bad..\n", 1);
  else if (player == 2)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n", 1);
  base->is_ended = 1;
}
