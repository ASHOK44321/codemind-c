#include <stdio.h>
int main()
{
    int a,b,i,r;
    scanf("%d %d", &a, &b);
    for(i=1;a>i<b;i++)
    {
        r=a*i;
        if(r%b==0)
        break;
        
    }
    printf("%d",r);
    return 0;
    
}