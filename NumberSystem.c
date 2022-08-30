#include<stdio.h>

int main()
{
    int M = 44,i,digit=0,j=0,count=0;
    int Arr[10];
   
    printf("\nOctal number :: %o",M);
    printf("\nDecimal number :: %d",M);
    printf("\nHexaDecimal number :: %x",M);
    i=0;
    while(M!=0)
    {
        digit=M%2;
        Arr[i]=digit;
        i++;
        M=M/2;
    }
 
    printf("\nBinary number ::");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",Arr[j]);
    }
    printf("\n\n");
    return 0;
}