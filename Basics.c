#include<stdio.h>

#define start main

int start()
{
    char *p="Welcome!...""to C programming";
    printf(p);

    printf("\n%d %d %d ",72,072,0x72);

    printf("\n%d %o %x",72,72,72);

    printf("\n%i %i %i ",72,072,0x72);

    printf("\n%05d,%5d,%-5d",32,32,32);

    printf("\n%6.3f,%06.3f,%09.3f,%-09.3f,%6.0f,%6.0f",45.6,45.6,45.6,45.6,45.4,45.6);
  
    printf("\n%d %c",'A','A');
    
    printf("\nab");
    printf("\bsi");
    printf("\rha");

    printf("\nHello world\
    ");

    // printf("Hello world               //error
    // ");


    

    return 0;
}