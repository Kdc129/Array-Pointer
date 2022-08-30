#include<stdio.h>


int  sum(int *Brr,int r)
{
    int i=0;
    int Add = 0;
    for(i=0;i<r;i++)
    {
        Add= Add+Brr[i];
    }
    return Add;


   
}

int main()
{
    int Arr[] = {1,2,3,4};
    int r = sizeof(Arr)/4;
    int p =sum(Arr,r);
    printf("\nAddtion :: %d",p);

    return 0;
}