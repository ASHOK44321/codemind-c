#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    int arr[k],i,j,cnt=0;
    for (i=0; i<k; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<k; i++)
    {
        cnt=0;
        for (j=0; j<k; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    cnt+=1;
                }
            }
        }
        if (cnt==1)
        {
            continue;
        }
        else
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
