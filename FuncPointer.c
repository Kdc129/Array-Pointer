#include<stdio.h>
void Max(int,int);
void Add(int,int);
void Sub(int,int);

int main()
{
    void (*F_Ptr[])(int ,int) = {Max,Add,Sub};
    int n1,n2,i=0;
    printf("\nInput two number ::\n");
    scanf("%d%d",&n1,&n2);
    printf("\nEntered numbers are :: %d and %d.",n1,n2);
    while(i<3)
    { 
       (*F_Ptr[i])(n1,n2);
       i++;
    }
    printf("\n\n");
    return 0;
}

void Max(int a,int b)
{
    if(a>b)
    {
        printf("\n%d is greater than %d.",a,b);
    }
    else
    {
        printf("\n%d is greater than %d.",b,a);
    }
}
void Add(int m,int n)
{
    printf("\nAddition of %d and %d is :: %d",m,n,m+n);
}
void Sub(int m1,int n1)
{
    printf("\nSubtraction of %d and %d is :: %d",m1,n1,m1-n1);
}