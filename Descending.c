#include<stdio.h>

int main()
{
    int Arr[]={2,5,7,12,5,8};
    int r,i,j,temp=0;
    r = sizeof(Arr)/4;

    printf("\nElements in array are :: ");
    for(i=0;i<r;i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            if(Arr[i]<=Arr[j])
            {
                temp= Arr[j];
                Arr[j] =Arr[i];
                Arr[i]=temp;
            }
      
        }
    }

    printf("\nElements in descending order :: ");
    for(i=0;i<r;i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n\n");
    return 0;
}