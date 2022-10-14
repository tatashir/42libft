# (1)コンパイラ
CC  = cc

# (2)コンパイルオプション
CFLAGS    = -Wall -Wextra -Werror

# (3)実行ファイル名
NAME  = libft.a

# (4)コンパイル対象のソースコード
SRCS    =	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
			ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
			ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
			ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
			ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
			ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c



# (5)オブジェクトファイル名
OBJS    = 	$(SRCS:.c=.o)
 
# (11)"make all"で make cleanとmakeを同時に実施。
all:		$(NAME)

# (9)ターゲットファイル生成
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
	
# (12).oファイル、実行ファイル、.dファイルを削除
clean:	
	rm -f $(OBJS)

fclean:	
	rm -f $(OBJS) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re