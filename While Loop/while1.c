#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int count = 0,count1=0;
   int i = 1;
   int num,max=0;
   while(i<=n)
   {
    scanf("%d", &num);
    if(num>70)
    {
        count++;
        if(num>70)
        {
            count1++;
            max = count1;
        }
    }else{
        count1 = 0;
    }
    i++;
   }
printf("%d\n",count);
printf("%d",max);
}
