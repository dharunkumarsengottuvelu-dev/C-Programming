#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0,count1 = 0;

    while(n>0)
    {
        int val;
        scanf("%d", &val);
        if(val > 20)
        {
            count++;
        }else
        {
            count1++;
        }
        n--;
    }
    printf("Congestion Minutes:%d\n",count);
    printf("Longest Congestion Streak:%d",count1);

}