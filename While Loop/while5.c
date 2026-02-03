#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=0,x;
    int suc=0,can=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(x==1)
            suc++;
        else
            can++;
        i++;
    }

    printf("Successful: %d\n",suc);
    printf("Cancelled: %d\n",can);

    if(can>suc)
        printf("Status: Risk");
    else
        printf("Status: Safe");

    return 0;
}
