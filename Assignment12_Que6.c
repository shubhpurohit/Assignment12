#include<stdio.h>
int printEvenRev(int);
int main()
{
    int n;
    scanf("%d",&n);
    printEvenRev(2*n);
    return 0;
}

printEvenRev(int n)
{
    if(n>0)
    {   if(n%2==0)
         { printf("%d ",n);
            printEvenRev(n-1);

    }
        else
            printEvenRev(n-1);
    }
}
