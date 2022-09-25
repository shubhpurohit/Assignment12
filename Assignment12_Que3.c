#include<stdio.h>
int printOdd(int);
int main()
{
    int n;
    scanf("%d",&n);
    printOdd(n);
    return 0;
}

printOdd(int n)
{
    if(n>0)
    {   if(n%2!=0)
         {
            printOdd(n-1);
            printf("%d",n);
    }
        else
            printOdd(n-1);
    }
}
