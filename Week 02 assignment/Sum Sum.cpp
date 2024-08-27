#include<stdio.h>
int main()

{
int N,i;
scanf("%d",&N);
int V;
int sum=0,sumn=0;

for (i=0;i<N;i++)
{
    scanf("%d",&V);
    if(V>0)
    {
        sum=sum+V;
    }
    else
    {
        sumn=sumn+V;
    }
}
printf("%d %d",sum,sumn);



return 0;
}
