#include<stdio.h>
int main()
{
    float time;
    int tmp,m;
    scanf("%f",&time);
    tmp=time*100;
    m=tmp%100;
    tmp/=100;
    if(tmp<=11)
    {
        printf("%.2f a.m.",time);
    }
    else
    {
        printf("%.2f p.m.",time);
    }
    return 0;
}
