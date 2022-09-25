#include<stdio.h>
int nNo(int);
int main()
{
    int n,k;
    printf("Enter an number ");
    scanf("%d",&n);
    nNo(n);
    return 0;
}
int nNo(int n)
{
    if(n>0)
    {
        nNo(n-1);
        printf("%d ",n);
    }


}


