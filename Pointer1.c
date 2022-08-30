#include<stdio.h>

int main()
{
    char *p,p1;
   // char far *p2,near *p3,huge *p4;         not supported
    printf("%ld %ld",sizeof(p),sizeof(p1));   //8,1
    printf("\n%ld %ld %ld",sizeof(char *),sizeof(int*),sizeof(float*));
    

    return 0;
}