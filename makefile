OBJS = bin/main.o bin/MysqlHandler.o
CC = g++ 
CFLAGS = -Wall -c -lstdc++  -Wall -O2 -L/usr/lib/mysql/ -lmysqlclient 
LFLAGS = -Wall -I/usr/include/mysql++ -I/usr/include/mysql -L/usr/lib/x86_64-linux-gnu -lmysqlclient -lpthread -lz -lm -lrt -latomic -ldl

NAME = bin/mysqlHandler



all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS)  -o $(NAME)
run: all
	$(NAME)
clean : 
	\rm bin/*.o $(NAME)
bin/main.o : src/main.cpp src/MysqlHandler/MysqlHandler.h  
	$(CC) $(CFLAGS) src/main.cpp -o bin/main.o
bin/MysqlHandler.o : src/MysqlHandler/MysqlHandler.cpp src/MysqlHandler/MysqlHandler.h
	$(CC) $(CFLAGS) src/MysqlHandler/MysqlHandler.cpp -o bin/MysqlHandler.o
