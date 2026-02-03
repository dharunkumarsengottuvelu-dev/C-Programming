#include <stdio.h>

int main()
{
    int max,n;
    scanf("%d",&max);
    scanf("%d",&n);

    int i=0,w,sum=0,count=0;

    while(i<n)
    {
        scanf("%d",&w);
        if(sum+w>max)
            break;
        sum+=w;
        count++;
        i++;
    }

    printf("Passengers Allowed: %d\n",count);
    printf("Overload: %s",(i<n)?"Yes":"No");
    return 0;
}
