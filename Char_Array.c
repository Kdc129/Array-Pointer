#include<stdio.h>

int main()
{
    char ch[] ={'k','r','i','s','h'};
     
    for(int i=0;i<sizeof(ch);i++)
    {
        printf("%c",ch[i]);
    }

    return 0;

}