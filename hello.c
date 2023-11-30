#include<stdio.h>
int sum(int n);
int main()
{
    int n,result;
    printf("enter the value of n");
    scanf("%d",&n);
    result=sum(n);
    printf("fact is %d",result);
    return 0;
    

}
int sum(int n)
{
    if(n==0) {
        return 1;
    }
    int factn=n*sum(n-1);

}