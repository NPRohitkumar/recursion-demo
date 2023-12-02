#include<stdio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("enter the value of n");
    scanf("%d",&n);
    result=fact(n);
    printf("fact is %d",result);
    return 0;
    

}
int fact(int n)
{
    if(n==0) {
        return 1;
    }
    return(n*fact(n-1));

}