# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2025-06-09 17:16:50 by waragwon          #+#    #+#             #
#   Updated: 2025-06-09 17:16:50 by waragwon         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #


NAME :=			tail

# is similiar to variable
CC :=			cc
CFLAGS :=		-Wall -Wextra -Werror -g3
# CFLAGS :=		-Wall -Wextra -g3

SRC_DIR :=		srcs
INC_DIR :=		includes

SRC_FIELS :=	main.c \
				files/readfile.c files/check_fd.c files/count_buffer.c \
				utils/utils.c utils/ft_atoi.c utils/ft_strdup.c utils/ft_strcat.c \
				malloc/ft_malloc.c malloc/linklist.c \
				tail/checkflag.c tail/count_file.c tail/invalid_byte.c \
				tail/tail_all.c tail/tail_std.c tail/tail_line.c tail/tail_byte.c \
				tail/tail_all2.c tail/tail_std2.c \

SRCS = $(SRC_FIELS:%.c=$(SRC_DIR)/%.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INC_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) $(OBJS) -o $@

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# forbidden file name
.PHONY: all clean fclean re