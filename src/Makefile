##
## Makefile for  in /home/planch_j/rendu/CPE/CPE_2015_Allum1/src
## 
## Made by Jean PLANCHER
## Login   <planch_j@epitech.net>
## 
## Started on  Sun Feb 21 18:58:55 2016 Jean PLANCHER
## Last update Sun Feb 21 19:09:04 2016 Jean PLANCHER
##

CC	= cc

RM     	= rm -f

CFLAGS 	+= -W -Wall -Wextra -g -lmy -I../include -L../lib/

NAME  	= ../allum1

SRCS   	= main.c \
	  game.c \
	  debug.c \
	  ia.c \
	  print_screen.c \
	  key_response.c \
	  is_ended.c \
	  get_next_line.c

OBJS   	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:   clean
	$(RM) $(NAME)

re: fclean all
