# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuchoi <kyuchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 15:47:27 by kyuchoi           #+#    #+#              #
#    Updated: 2022/02/06 15:47:28 by kyuchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

FILES		=	ft_isalpha \
				ft_isprint \
				ft_strnstr \
				ft_toupper \
				ft_isdigit \
				ft_tolower \
				ft_isalnum \
				ft_strchr \
				ft_isascii \
				ft_strrchr \
				ft_strlen \
				ft_strncmp \
				ft_memset \
				ft_memchr \
				ft_bzero \
				ft_memcmp \
				ft_memcpy \
				ft_memmove \
				ft_strlcpy \
				ft_strlcat \
				ft_atoi \
				ft_calloc \
				ft_strdup \
				ft_substr \
				ft_strjoin \
				ft_strtrim \
				ft_split \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putendl_fd \
				ft_putnbr_fd \

FILES_BONUS	=	ft_lstnew \
				ft_lstadd_front \
				ft_lstsize \
				ft_lstlast \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \
				ft_lstmap \

DIR_OBJS	=	./
OBJS		=	$(addprefix $(DIR_OBJS), $(addsuffix .o, $(FILES)))
OBJS_BONUS	=	$(addprefix $(DIR_OBJS), $(addsuffix .o, $(FILES_BONUS)))
DIR_SRCS	=	./
SRCS		=	$(addprefix $(DIR_SRCS), $(addsuffix .c, $(FILES)))
SRCS_BONUS	=	$(addprefix $(DIR_SRCS), $(addsuffix .c, $(FILES_BONUS)))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar crs
RM			=	rm -f

.c.o:		$(SRCS) $(SRCS_BONUS)
			$(CC) $(CFLAGS) -c -o $@ $<

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS_BONUS)
			$(AR) $(NAME) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
