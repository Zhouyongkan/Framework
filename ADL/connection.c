#include "connection.h"
#include<stdio.h>
#include<stdlib.h>
int connection(MYSQL **my,char *name,char *passwd, char *db){
    *my=mysql_init(NULL);
    if(mysql_real_connect(*my,"localhost",name,passwd,db,0,NULL,0)==NULL)
        printf("mysql_real_connect :%s\n",mysql_error(*my));
}

int update(MYSQL *my,char *sql){
    if(mysql_query(my,sql));
        
}


MYSQL_RES *query(MYSQL *my,char *sql){
    mysql_query(my,sql);
    return mysql_store_result(my);
}
