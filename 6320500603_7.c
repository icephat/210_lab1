#include<stdio.h>
int main()
{
    float time;
    int a,tmp,m;
    scanf("%f",&time);
    tmp=time*100/100;
    a=time*100;
    m=a%100;
    if(tmp<=11)
    {
        printf("%d:%d a.m.",tmp,m);
    }
    else
    {
        printf("%d:%d p.m.",tmp,m);
    }

    return 0;
}
