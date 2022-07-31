#include <stdio.h>
int main()
{
  int a,k,i,c=0,r,rev=0;
	scanf("%d",&a); 
	int p=a;
    k=a;
    do 
    {
        k=k/10;
        ++c; 
    }
    while (k != 0);
    for(i=0;i<c;i++)  
    {
        r=a%10; 
        rev =rev*10+r;
        a=a/10;
    }
   if(p==rev)
   printf("True");
   else
   printf("False");
   
}