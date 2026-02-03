#include <stdio.h>

int main()
{
    int max,n;
    scanf("%d",&max);
    scanf("%d",&n);

    int i=0,x,sum=0,count=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(sum+x>max)
            break;
        sum+=x;
        count++;
        i++;
    }

    printf("People Entered: %d\n",count);
    printf("Overload Status: %s",(i<n)?"Yes":"No");
    return 0;
}
