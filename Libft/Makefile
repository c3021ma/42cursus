# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 16:54:34 by fmoreno-          #+#    #+#              #
#    Updated: 2022/11/29 20:17:28 by fmoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Fichero Makefile para libft


SRCS			=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_strlen.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					
SRCS_BONUS		=	ft_lstnew_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstadd_back_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstmap_bonus.c \

OBJS			= $(SRCS:.c=.o)

BONUS			= $(SRCS_BONUS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJS):		$(SRCS)
				$(CC) $(CFLAGS) -c $(SRCS)

$(BONUS):		$(SRCS) $(SRCS_BONUS)
				$(CC) $(CFLAGS) -c $(SRCS) $(SRCS_BONUS)

clean:
				$(RM) $(OBJS) $(BONUS)

fclean:			clean
				$(RM) $(NAME) $(OBJS) $(BONUS)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS)
				ar rcs $(NAME) $(OBJS) $(BONUS)

.PHONY:			all clean fclean re bonus
