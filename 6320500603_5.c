#include<stdio.h>
int main()
{
    int N,i,max;
    scanf("%d",&N);
    int a[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1;i<N;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
        printf("%d",max);

    return 0;
}
