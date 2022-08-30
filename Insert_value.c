#include<stdio.h>

int main()
{
    int Arr[100],i,j,value,n,k;
    printf("\nInput the size of array :: ");
    scanf("%d",&n);

    printf("\nInput %d elements in array :: \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&Arr[i]);
    }
    
    printf("\nInput the value to be inserted :: ");
    scanf("%d",&value);

    printf("\nExisting array list are ::     \n");
    for(i=0;i<n;i++)
    {
        printf("%5d",Arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(value<Arr[i])
        {
            k=i;
            break;
        }
        else
        {
            k=i+1;
        }
    }

    for(i=n+1;i>=k;i--)
    {
        Arr[i]=Arr[i-1];
    }
     Arr[k]=value;
    
    printf("\nNew sorted array is :: \n");
    for(i=0;i<=n;i++)
    {
        printf("%5d",Arr[i]);
    }
    printf("\n\n");

    return 0;
}