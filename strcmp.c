// function use kore compare

#include<stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
    scanf("%s %s",a,b);
    int val=strcmp(a,b);
    if(val<0)
    {
        printf("A is smaller\n");
    }
    else if (val>0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("same\n");
    }
    
    return 0;
}

// val=1,b choto
// val=0,a,b same
// val=-1,a choto