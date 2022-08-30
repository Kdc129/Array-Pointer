#include<stdio.h>

int  main()
{
    char ch = 'A';           //%C
    int no = 89;             //%d
    float f = 1.2;           //%f
    double d = 34.5;         //lf
    const int no1 =90;       //qualifier
    short int n1 = -10;      //modifier
    long int n2 =4;          //modifier
    signed int m1 = -2;      //modifier
    unsigned int m2 = 23;    //modifier
 
    printf("\ncharacter :: %c",ch);
    printf("\ninteger :: %d",no);
    printf("\nfloat :: %.3f",f);
    printf("\ndouble :: %lf",d);
    printf("\nconst int :: %d",no1);
    printf("\nshort integer :: %hd",n1);
    printf("\nlong integer :: %ld",n2);
    printf("\nsigned integer :: %d",m1);
    printf("\nunsigned integer :: %d",m2);
    
    printf("\n\n:: Sizeof different data types ::");
    printf("\ncharacter :: %d",sizeof(ch));
    printf("\ninteger :: %d",sizeof(no));
    printf("\nfloat :: %d",sizeof(f));
    printf("\ndouble :: %d",sizeof(d));
    printf("\nconst int :: %d",sizeof(no1));
    printf("\nshort integer :: %d",sizeof(n1));
    printf("\nlong integer :: %d",sizeof(n2));
    printf("\nsigned integer :: %d",sizeof(m1));
    printf("\nunsigned integer :: %d",sizeof(m2));
    




    return 0;
}