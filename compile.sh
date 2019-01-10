#!/bin/bash
g++ -o mysql mysql.cpp -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql
sudo ./mysql
