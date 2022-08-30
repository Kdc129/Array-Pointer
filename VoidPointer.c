#include<stdio.h>

int main()
{
    int d = 78;
    char ch = 'K';
    float f = 45.5;
    void *V = &d;       

    printf("%d",*(int *)V);       // While using void pointer we have to use typecasting for access right variable
    printf("\n%d",sizeof(V));     // sizeof void pointer is also 8bytes.
    printf("\n%d",V);
    printf("\n%d",V-3);
    

    return 0;
}