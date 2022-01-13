CC = CC
FLAGS = -Wall -Wextra -Werror
SERVER = server
CLIENT = client
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus
HEADER_DIR = include
HEADER = include/ft_minitalk.h
SRC = minitalk_utils.c
SRCB = minitalk_utils_bonus.c

OBJS = $(SRC:.c=.o)
OBJBS = $(SRCB:.c=.o)


all: $(OBJS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) ft_server.c $(OBJS) -o $(SERVER)
	$(CC) $(FLAGS) -I$(HEADER_DIR) ft_client.c $(OBJS) -o $(CLIENT)

bonus: $(OBJBS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) ft_server_bonus.c $(OBJBS) -o $(SERVER_BONUS)
	$(CC) $(FLAGS) -I$(HEADER_DIR) ft_client_bonus.c $(OBJBS) -o $(CLIENT_BONUS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJBS)

fclean: clean
	rm -rf $(SERVER) $(SERVER_BONUS) $(CLIENT) $(CLIENT_BONUS)

re: fclean all

.PHONY : all clean fclean re bonus
