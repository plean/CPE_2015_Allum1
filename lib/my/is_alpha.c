/*
** is_alpha.c for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/lib/my/include/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Wed Feb 17 02:54:49 2016 Jean PLANCHER
** Last update Wed Feb 17 16:35:12 2016 Jean PLANCHER
*/

#include <unistd.h>

int	is_alpha(char *str, char c)
{
  int	i;

  i = -1;
  if (str == NULL || !str[0])
    return (0);
  if (str[0] == '-' && c != '+')
    i++;
  while (str[++i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
    }
  return (1);
}
