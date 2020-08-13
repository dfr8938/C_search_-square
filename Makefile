all:
	gcc ft_count_word.c ft_h.h ft_isspace.c ft_length_str.c ft_malloc_word.c ft_split.c ft_biggest_num.c ft_count_num.c main.c && mv a.out BSQ

clean:
	rm -f cat.o
fclean: clean
	rm -f a.out
.PHONY:
	all clean fclean
