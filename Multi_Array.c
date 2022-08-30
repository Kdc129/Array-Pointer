#include<stdio.h>

int main()
{
    int Arr[3][2]={1,23,45,67,89,99};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<2;j++)
        {
            sum=sum+Arr[i][j];
        }
        printf("sum of %d row ::%d",i,sum);
        printf("\n");
    }
    
    return 0;
}