# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: waragwon <waragwon@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2025-06-05 08:52:55 by waragwon          #+#    #+#             #
#   Updated: 2025-06-05 08:52:55 by waragwon         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME :=			cat

# is similiar to variable
CC :=			cc
CFLAGS :=		-Wall -Wextra -Werror
# CFLAGS :=		-Wall -Wextra -g3

SRC_DIR :=		srcs
INC_DIR :=		includes

SRC_FIELS :=	main.c \
				files/readfile.c files/check_fd.c \
				utils/utils.c \
				cat_all_file.c cat_std.c \

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