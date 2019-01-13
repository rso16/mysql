OBJS = bin/main.o bin/MysqlHandler.o
CC = g++ 
CFLAGS = -Wall -c -I/usr/include/mysql 
LFLAGS = -Wall -L/usr/lib/x86_64-linux-gnu -lmysqlclient -lpthread -lz -lm -lrt -latomic -ldl

NAME = bin/mysqlHandler



all: $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LFLAGS)  
run: all
	sudo $(NAME)
clean : 
	\rm bin/*.o $(NAME)
bin/main.o : src/main.cpp src/MysqlHandler/MysqlHandler.h 
	$(CC) $(CFLAGS) src/main.cpp -o bin/main.o
bin/MysqlHandler.o : src/MysqlHandler/MysqlHandler.cpp src/MysqlHandler/MysqlHandler.h  
	$(CC) $(CFLAGS) $(LFLAGS) src/MysqlHandler/MysqlHandler.cpp -o bin/MysqlHandler.o
