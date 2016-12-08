/*
** base.h for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/include/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Tue Feb 16 23:48:57 2016 Jean PLANCHER
** Last update Sun Feb 21 17:44:53 2016 Jean PLANCHER
*/

#ifndef BASE_H_
# define BASE_H_

typedef struct	s_prog_base
{
  int		nb_lines;
  int		difficulty;
  int		*matches_per_lines;
  int		*nb_deleted;
  int		*is_empty;
  int		line;
  int		matches;
  int		is_ended;
}		t_prog_base;

char	*get_next_line(const int fd);
void	aff_game(t_prog_base *base);
int	check_key_response();
void	print_screen(t_prog_base *base);
void	do_reach(t_prog_base *base, int *refresh, int nb);
void	aff_promt(t_prog_base *base);
void	my_ia(t_prog_base *base);
void	check_end(t_prog_base *base, int player);

#endif /* !BASE_H_ */
