#include "connection.h"
#include<stdio.h>
#include<stdlib.h>


int main(void){
    MYSQL *my=NULL;
    connection(&my,"root","111111","gentle");
    update(my,"insert into users values(3,'c','d','1998-04-05')");
}
