/*
** game.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Sun Feb 21 17:41:32 2016 Jean PLANCHER
** Last update Fri Mar 25 23:38:35 2016 Jean PLANCHER
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	aff_message(t_prog_base *base, int player)
{
  if (player == 1)
    my_putstr("Player removed ", 1);
  else if (player == 2)
    my_putstr("AI removed ", 1);
  my_putnbr_base("0123456789", base->matches, 1);
  my_putstr(" match(es) from line ", 1);
  my_putnbr_base("0123456789", base->line, 1);
  my_putchar('\n', 1);
}


void	aff_promt(t_prog_base *base)
{
  aff_message(base, 1);
  if ((base->nb_deleted[base->line - 1] += base->matches) ==
      base->matches_per_lines[base->line - 1])
    base->is_empty[base->line - 1] = 1;
  print_screen(base);
  check_end(base, 1);
  if (base->is_ended == 1)
    return ;
  my_putstr("\nAI's turn...\n", 1);
  my_ia(base);
  aff_message(base, 2);
  if ((base->nb_deleted[base->line - 1] += base->matches) ==
      base->matches_per_lines[base->line - 1])
    base->is_empty[base->line - 1] = 1;
  print_screen(base);
  check_end(base, 2);
  if (base->is_ended == 1)
    return ;
  my_putstr("\nYour turn:", 1);
}

int	terminator(t_prog_base *base, int *nb, int *refresh)
{
  if (base->is_ended == 1)
    return (1);
  if ((*nb = check_key_response()) >= 0)
{
      if (*nb == 253813721)
	return (1);
      *refresh += 1;
  }
  else
    *refresh = 0;
  return (0);
}

void	aff_game(t_prog_base *base)
{
  int	nb;
  int	refresh;

  refresh = 0;
  nb = 0;
  while (42)
    {
      if (refresh == 2)
	{
	  base->matches = nb;
	  do_reach(base, &refresh, nb);
          refresh = 0;
	}
      if (refresh == 1)
	{
	  base->line = nb;
	  do_reach(base, &refresh, nb);
	}
      if (refresh == 0)
	do_reach(base, &refresh, nb);
      if (terminator(base, &nb, &refresh))
	return ;
    }
}
