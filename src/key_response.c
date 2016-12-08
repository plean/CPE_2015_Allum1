/*
** key_response.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 03:15:14 2016 Jean PLANCHER
** Last update Sun Feb 21 18:31:19 2016 Jean PLANCHER
*/

#include <stdlib.h>
#include "my.h"

int	check_key_response()
{
  char	*buffer;
  int	k;

  buffer = get_next_line(0);
  if (buffer == NULL)
    return (253813721);
  if (!is_alpha(buffer, '+'))
    {
      free(buffer);
      my_putstr("Error: invalid input (positive number expected)", 1);
      return (-1);
    }
  k = my_getnbr(buffer);
  free(buffer);
  return (k);
}
