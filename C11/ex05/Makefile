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

NAME := do-op

# is similiar to variable
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRC_FIELS := main.c atoi.c check_invalid.c ft_putnbr.c ft_strlen.c operate.c
SRCS = $(SRC_FIELS:%.c=$(SRC_DIR)/%.c)
OBJS = $(SRCS:.c=.o)

# all is norm
all: $(NAME)

$(NAME): $(OBJS) Makefile
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
