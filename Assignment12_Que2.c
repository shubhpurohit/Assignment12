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
        printf("%d ",n);
        nNo(n-1);




}



