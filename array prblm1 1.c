#include<stdio.h>
int main()
{
    int num[10],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
      scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1; i<n; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    printf("maximum = %d\n",max);
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
      scanf("%d",&num[i]);
    }
    int min = num[0];
    for(i=1; i<n; i++)
    {
        if(min > num[i])
            max = num[i];
    }
    printf("minimum= %d\n",min);
return 0;
}
