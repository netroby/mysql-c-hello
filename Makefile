all:
	 gcc -o main main.c `mysql_config --cflags --libs`
