#include<stdio.h>
int main(){
    int a;
    int i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
