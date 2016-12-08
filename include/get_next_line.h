/*
** get_next_line.h for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/test/include/
**
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
**
** Started on  Sun Feb 21 15:58:57 2016 Jean PLANCHER
** Last update Sun Feb 21 15:59:09 2016 Jean PLANCHER
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
# define READ_SIZE (2047)
# endif /* !READ_SIZE */

char	*get_next_line(const int fd);
char	*return_null_or_zero(char *line, int i, int len_read, int len_line);
char	*gnl_strcpy(char *src, char c, int len_line);
int	gnl_read(char *buffer, const int fd, int *i);

#endif /* !GET_NEXT_LINE_H_ */
