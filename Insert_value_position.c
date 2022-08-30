#include<stdio.h>

int main()
{
    int Arr[50],i,j,value,pos,n;
    
    printf("\nInput the size of array :: ");
    scanf("%d",&n);
   
    printf("\nEnter %d elements in array :: \n",n);
    for(i=0;i<n;i++)
    {
        printf("element- %d :: ",i);
        scanf("%d",&Arr[i]);
    }

    printf("\nInput the value to be inserted :: ");
    scanf("%d",&value);

    printf("\nInput the position, where the value to be inserted :: ");
    scanf("%d",&pos);

    printf("\nExisting array list are ::\n"); 
    for(i=0;i<n;i++)
    {
        printf("%5d",Arr[i]);
    }
    
    for(i=n;i>=pos;i--)
    {
        Arr[i] = Arr[i-1];
    }
        Arr[pos -1] =value;
    

    printf("\nNew array  list is :: \n");
    for(i=0;i<=n;i++)
    {
        printf("%5d",Arr[i]);

    }
    return 0;
}