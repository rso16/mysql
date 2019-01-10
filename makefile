OBJS = bin/main.o bin/mysqlHandler.o
CC = gcc
CFLAGS = -Wall -c
LFLAGS = -Wall
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
