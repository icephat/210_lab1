#include<stdio.h>
int main()
{
    float time;
    int tmp,m;
    scanf("%f",&time);
    tmp=time*100;
    m=(int)time%100;
    tmp/=100;
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
