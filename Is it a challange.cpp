#include<stdio.h>
int main()

{
int N,i;
scanf("%d",&N);

for (i=1;i<=N;i++)
{
    if(N>0)
    {
        printf("%d ",i);
    }
}

for (i=N;i<=0;i++)
{
    if (N<0)
    {
        printf("%d ",i);
    }
    else
    {
        printf("0");
    }
}




return 0;
}
