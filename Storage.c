#include<stdio.h>

static int np = 102;    //Global Static 

void stat()
{
    static int n = 20; //Preserve the value of variable across the function call
    printf("\nstatic :: %d",n);
    n++;
}

int main()
{
    extern int z;
    int i=1;             //It is by default auto
    auto int no =10;     
    register int n1= 90;
    static int n2 = 20;           //Local Static Variable
    printf("\nAuto :: %d",no);
    printf("\nRegister :: %d",n1);
    while(i<=4)
    {
       stat();
       i++;
    }
    
    printf("\nExtern :: %d",z);    //Extern.c
   
    return 0;
}

/*
          gcc Storage.c Extern.c -omyexe 
         ./myexe 
*/