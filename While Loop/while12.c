#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=0,x;
    int max=0,surge=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(x>max)
            max=x;
        if(x>5)
            surge++;
        i++;
    }

    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",surge);
    return 0;
}
