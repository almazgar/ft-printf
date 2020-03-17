# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avenonat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 15:43:01 by avenonat          #+#    #+#              #
#    Updated: 2019/12/08 15:30:48 by avenonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c free_list.c flags.c width.c accuracy.c size.c search_type.c\
	  type_decimal_minus.c type_decimal_plus.c type_decimal_priority.c\
	  type_decimal_regular.c type_decimal_size.c type_decimal_space.c\
	  type_decimal_zero.c type_char_priority.c ft_putnchar.c type_octal_size.c\
	  type_octal_priority.c type_octal_regular.c type_octal_minus.c convert.c\
	  type_octal_zero.c type_hexadecimal_size.c type_hexadecimal_priority.c\
	  type_hexadecimal_minus.c\
	  type_hexadecimal_regular.c convert_hexadecimal_upcase.c\
	  convert_hexadecimal_lcase.c type_float_size.c type_float_priority.c\
	  type_float_minus.c type_float_plus.c type_float_space.c\
	  type_float_zero.c type_float_regular.c convert_float.c len_after_dot.c\
	  type_pointer_regular.c  ft_putchar.c ft_strjoin.c ft_atoi.c\
	  ft_itoa.c ft_putnbr.c ft_putstr.c ft_strcat.c ft_strnew.c ft_strcpy.c\
	  ft_memset.c ft_strlen.c type_char_minus_c.c type_char_regular_c.c\
	  type_char_minus_s.c type_char_regular_s.c ft_putnstr.c ft_itoa8.c\
	  type_percent_regular.c type_percent_minus.c type_percent_priority.c\
	  char_pregular_space.c char_pminus_space.c decimal_pplus_space.c\
	  decimal_pregular_space.c decimal_pzero.c octal_pregular_space.c\
	  hexadecimal_pregular_space.c decimal_pspace_if.c decimal_pspace_else.c\
	  ft_putendl.c accept_color.c ft_round.c ft_power.c convert_float_zero.c\
	  zero2.c float2.c minus2.c decimal_simple_size.c find_percent.c\
	  ft_putstr.c decimal_pregular_zero.c search_mistake.c\

OBJ = $(SRC:.c=.o)
	SRCDIR = srcs
	OBJDIR = objs

	SRCS = $(addprefix $(SRCDIR)/, $(SRC))
	OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

CFLAGS = -c -Wall -Wextra -Werror

NAME = libftprintf.a

.PHONY: all clean fclean re
			.SUFFIXES: .c .o
all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
				@/bin/mkdir -p $(OBJDIR)
				@gcc $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
				@ar rcs $@ $^
				@ranlib $@
				@echo "\033[32m$(NAME) OK ! \033[0m"

clean:
				@/bin/rm -rf $(OBJDIR)
				@echo "\033[33mObject deleted\033[0m"

fclean: clean
				@/bin/rm -f $(NAME)
				@echo "\033[33mExec deleted\033[0m"

re: fclean all
