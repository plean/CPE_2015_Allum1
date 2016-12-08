##
## Makefile for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1
## 
## Made by Jean PLANCHER
## Login   <planch_j@epitech.net>
## 
## Started on  Wed Feb 17 00:42:03 2016 Jean PLANCHER
## Last update Wed Feb 17 00:42:45 2016 Jean PLANCHER
##

all:
	make -C lib/my
	make -C src
clean:
	make clean -C lib/my
	make clean -C src
fclean: clean
	make fclean -C lib/my
	make fclean -C src

re: fclean all

.PHONY: all clean fclean re
