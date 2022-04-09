SERVER = server
CLIENT = client
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SERVER_S = server.c
CLIENT_S = client.c

SERVER_O = $(patsubst %.c, %.o, $(SERVER_S))
CLIENT_O = $(patsubst %.c, %.o, $(CLIENT_S))
#$(patsubsti he%,_%_,Hello Hey Hi) # Evaluates to "_llo_ _y_ Hi"  yani yüzde arasındaki kısmı, 2. parametredeki
#şeyle değiştir demek, tabi bunu 3. paramterdeki şeye uyguluyor. bölyece SERVER_S yani server.c server.o dönüşüyor
#ve o da SERVER_O atıyor


.PHONY : all clean fclean re

all :
	@$(MAKE) $(SERVER) 
	@$(MAKE) $(CLIENT) 
	 


$(SERVER) : $(SERVER_O)
	$(CC) $(CFLAGS) $(SERVER_O) -o $(SERVER)

$(CLIENT) : $(CLIENT_O)
	$(CC) $(CFLAGS) $(CLIENT_O) -o $(CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(SERVER_O) $(SERVER_D) $(CLIENT_O)

fclean : clean
	@rm -f $(SERVER) $(CLIENT)

re : clean all
