#include<stdio.h>
int decToOct(int n);
int main()
{
    int n;
    scanf("%d",&n);
    decToOct(n);
    return 0;
}

int decToOct(int n)
{
    if(n>=1&&n<=7)
    {printf("%d",n);
        return n;
    }
    decToOct(n/8);
    printf("%d",n%8);

}

