#include<stdio.h>

int main()
{
    int Arr[] = {43,56,55,78,25,47,42,32,56};
    int Even[10],Odd[10],i,j=0,k=0;
    int r = sizeof(Arr)/4;

    printf("\nElements in array are :: ");
    for(i=0;i<r;i++)
    {
        printf("%d\t",Arr[i]);
    }

    for(i=0;i<r;i++)
    {
        if(Arr[i]%2 == 0)
        {
            Even[j]=Arr[i];
            j++;
        }
        else
        {
            Odd[k]=Arr[i];
            k++;
        }
    
    }
    printf("\nOdd elements are :: ");
    for(i=0;i<k;i++)
    {
        printf("%d\t",Odd[i]);
    }
    printf("\nEven elements are :: ");
    for(i=0;i<j;i++)
    {
        printf("%d\t",Even[i]);
    }

    return 0;
}