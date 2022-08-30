#include<stdio.h>

int main()
{
    int no =45,n1=89;
    int *p =&no;
    int *q =&n1;
 
    printf("\nvalue of integer :: %d",no);                 //line 8 and 9 are same
    printf("\nvalue of integer with pointer :: %d",*p);
    printf("\nAddress of integer :: %d",&no);              //line 10 and 11 are same
    printf("\nAddress of integer with pointer :: %d",p);
    printf("\nAddress of pointer p :: %d",&p); 
    printf("\nAddress of pointer q :: %d",&q); 


    //Arithmatic  Operation on Pointer 
    printf("\n:: Arithmatic Operation On Pointer ::\n");
    printf("Addition Operator On Pointer ::%d",p+3);
    printf("\nSubtraction Operator On Pointer ::%d",p-3); 
    printf("\nSubtraction Operator On Pointer ::%d",p-q); 

    
    return 0;
}