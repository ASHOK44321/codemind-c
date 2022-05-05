#include<stdio.h>
int main()
{
    int p,q,i,s,c=0;
    scanf("%d%d",&p,&q);
    for(p;p<=q;p++)
    {
        s=0;
        for(i=2;i*i<=p;i++)
        {
            if(p%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0&&p!=1)
        {
            c++;
        }
    }
printf("%d",c);
}