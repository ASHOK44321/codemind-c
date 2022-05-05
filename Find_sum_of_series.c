#include<stdio.h>
int main()
{
    int A,i;
    float s=0;
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    {
        s=1.0/i+s;
    }
    printf("%.2f",s);
}