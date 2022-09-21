# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:41:39 by darismen          #+#    #+#              #
#    Updated: 2022/09/21 12:38:56 by darismen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS=		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c
OBJS=		$(SRCS: .c=.o)
CC=		gcc
RM=		rm -f
CFLAGS=		-Wall -Wextra -Werror
NAME=		libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar -rcs $(NAME) $(OBJS)
		@ranlib $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus:	$(NAME) $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ_BONUS)

#clean:
#		$(RM) $(OBJS)
#fclean:		clean
#		$(RM) $(NAME)
#re:		fclean $(NAME)

.PHONY:	all clean fclean re