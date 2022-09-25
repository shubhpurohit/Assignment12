#include<stdio.h>
int printOddRev(int);
int main()
{
    int n;
    scanf("%d",&n);
    printOddRev(2*n);
    return 0;
}

printOddRev(int n)
{
    if(n>0)
    {   if(n%2!=0)
         { printf("%d ",n);
            printOddRev(n-1);

    }
        else
            printOddRev(n-1);
    }
}
