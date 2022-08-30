#include<stdio.h>

int main()
{
    int Arr[]={23,65,12,7,90};
    int i,j,max= Arr[0],min=Arr[1];
    printf("\nElements in array are ::");
    for(i=0;i<sizeof(Arr)/4;i++)
    {
        printf("%d\t",Arr[i]);
    }
    for(i=0;i<sizeof(Arr)/4;i++)
    {
        if(max<=Arr[i])
        {
             max =Arr[i];
        }
        else
        {
            min=Arr[i];
        }
        
    }
    printf("\nMaximum Element in array are ::%d",max);
    printf("\nMinimum Element in array are ::%d",min);
    return 0;
}