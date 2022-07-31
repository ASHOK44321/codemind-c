#include<stdio.h>
int main()
{
    int n,m,i,k,s;
    scanf("%d%d",&n,&m);
    //if(m<n)
    //k=m;
   for(i=1;i<=m*n;i++)
   {
       if(n%i==0&&m%i==0)
       {
           s=i;
           
       }
   }
   printf("%d",s);
}