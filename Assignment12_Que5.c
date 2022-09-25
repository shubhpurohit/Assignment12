#include<stdio.h>
int printEven(int);
int main()
{
    int n;
    scanf("%d",&n);
    printEven(2*n);
    return 0;
}

printEven(int n)
{
    if(n>0)
    {   if(n%2==0)
         {
            printEven(n-1);
            printf("%d ",n);
    }
        else
            printEven(n-1);
    }
}

