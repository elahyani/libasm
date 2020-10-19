NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJ = $(SRCS:.s=.o)

LINKERFLAG = -fmacho64

all: $(NAME)

$(NAME):$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib	$(NAME)

%.o : %.s
	@nasm $(LINKERFLAG) $<

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
