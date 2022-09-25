#include<stdio.h>
int printNSquare(int);
int main()
{
    int n,k;
    printf("Enter an number ");
    scanf("%d",&n);
    printNSquare(n);
    return 0;
}
int printNSquare(int n)
{
    if(n>0)
    {
        printNSquare(n-1);
        printf("%d ",n*n);
    }


}



