# (1)コンパイラ
CC  = cc

# (2)コンパイルオプション
CFLAGS    = -Wall -Wextra -Werror

# (3)実行ファイル名
NAME  = libft.a

# (4)コンパイル対象のソースコード
SRCS    =	ft_substr.c



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