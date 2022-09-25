#include<stdio.h>
int decToBin(int n);
int main()
{
    int n;
    scanf("%d",&n);
    decToBin(n);
    return 0;
}

int decToBin(int n)
{
    if(n==1)
    {printf("1");
        return 1;
    }
    decToBin(n/2);
    printf("%d",n%2);

}
