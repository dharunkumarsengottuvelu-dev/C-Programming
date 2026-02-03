#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=0,x;
    int total=0,burn=0;

    while(i<n)
    {
        scanf("%d",&x);
        total+=x;
        if(x>4)
            burn++;
        i++;
    }

    printf("Total Overtime: %d\n",total);
    printf("Burnout Days: %d",burn);
    return 0;
}
