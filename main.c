#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <mysql.h>

int main(void)
{
    MYSQL* mysql = mysql_init(NULL);
    if (!mysql_real_connect(mysql, "127.0.0.1", "root", "", "test", 0, "3306", 0)) {
        printf("Not found mysql connection");
    }
    printf("Ok");
    return 0;
}
