# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:41:39 by darismen          #+#    #+#              #
#    Updated: 2022/09/21 14:40:38 by darismen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libft.a

SRCS=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr ft_atoi.c

OBJS=	${SRCS:.c=.o}

INCLUDES	= -I includes

CC=		gcc
RM=		rm -f
AR=		ar -rcs
CFLAGS=		-Wall -Wextra -Werror


all:		${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
#		ranlib ${NAME}

# .c.o:		
# 		@$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus:	${NAME} ${OBJ_BONUS}
	@ar rcs ${NAME} ${OBJ_BONUS}

clean:
	@${RM} ${OBJS}
# fclean:		clean
# 	@${RM} ${NAME}
# re:		fclean ${NAME}

#.PHONY:	all clean fclean re

# NAME	= libft.a

# DIR_SRCS	= srcs
# DIR_OBJS	= objs
# SUBDIRS		= is mem

# SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
# OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
# SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
# OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

# INCLUDES	= -I includes

# CC		= gcc
# CFLAGS	= -Wall -Wextra -Werror
# RM		= /bin/rm -f

# $(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
# 			@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
# 			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# all:		$(NAME)

# $(NAME):	$(OBJS)
# 			@ar -rcs $(NAME) $(OBJS)
# 			@ranlib $(NAME)

# clean:
# 			@$(RM) $(OBJS)
# 			@$(RM) -r $(DIR_OBJS)

# fclean:		clean
# 			@$(RM) $(NAME)

# re:			fclean all

# .PHONY:		all clean fclean re