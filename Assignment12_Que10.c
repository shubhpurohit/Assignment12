#include<stdio.h>
int revNum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    revNum(n);
    return 0;
}

int revNum(int n)
{
    if(n>=0&&n<=9)
    {printf("%d",n);
        return n;
    }
     printf("%d",n%10);
    revNum(n/10);


}

