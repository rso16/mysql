OBJS = bin/main.o bin/MysqlHandler.o bin/node.o bin/ECDH.o
CC = g++ 
CFLAGS = -Wall -c -I/usr/include/mysql -I/src/
LFLAGS = -Wall -L/usr/lib/x86_64-linux-gnu -lmysqlclient -lpthread -lz -lm -lrt -latomic -ldl

NAME = bin/mysqlHandler



all: $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LFLAGS)  
run: all
	sudo $(NAME)
clean : 
	\rm bin/*.o $(NAME)
bin/main.o : src/main.cpp src/MysqlHandler/MysqlHandler.h src/ECDH/ECDH.h 
	$(CC) $(CFLAGS) src/main.cpp -o bin/main.o
bin/MysqlHandler.o : src/MysqlHandler/MysqlHandler.cpp src/MysqlHandler/MysqlHandler.h src/node/node.h
	$(CC) $(CFLAGS) $(LFLAGS) src/MysqlHandler/MysqlHandler.cpp -o bin/MysqlHandler.o
bin/node.o : src/node/node.c src/node/node.h  
	$(CC) $(CFLAGS) $(LFLAGS) src/node/node.c -o bin/node.o
bin/ECDH.o : src/ECDH/ECDH.cpp src/ECDH/ECDH.h src/node/node.h    
	$(CC) $(CFLAGS) $(LFLAGS) src/ECDH/ECDH.cpp -o bin/ECDH.o

