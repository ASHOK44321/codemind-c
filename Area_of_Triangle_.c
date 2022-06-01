#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    double area,s,d;
    if (l,b,h>=1 && l,b,h<=1000)
    {
        s=(l+b+h)*0.5;
        d=s*(s-l)*(s-b)*(s-h);
        area=sqrt(d);
        printf("%.2lf",area);
    }
    return 0;
}