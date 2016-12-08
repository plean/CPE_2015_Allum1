##
## Makefile for  in /home/planch_j/rendu/PSU_2015_my_printf
##
## Made by Jean PLANCHER
## Login   <planch_j@epitech.net>
##
## Started on  Mon Nov 16 23:24:30 2015 Jean PLANCHER
## Last update Wed Feb 17 02:57:44 2016 Jean PLANCHER
##

CP      = cp

CC      = cc -I./include

AR      = ar rc

RAN     = ranlib

NAME    = ../libmy.a

RM      = rm -f

SRCS    = my_basic_function.c \
	  my_putnbr_base.c \
	  my_getnbr.c \
		is_alpha.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all
