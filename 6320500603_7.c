#include<stdio.h>
int main()
{
    float time;
    int tmp,m;
    scanf("%f",&time);
    tmp=time*100;
    m=tmp%100;
    tmp/=100;
    if(m>=10)
    {
        if(tmp<=11)
        {
            printf("%d:%d a.m.",tmp,m);
        }
        else
        {
            printf("%d:%d p.m.",tmp,m);
        }
    }
    else if(m<=9)
    {
        if(tmp<=11)
        {
            printf("%d:0%d a.m.",tmp,m);
        }
        else
        {
            printf("%d:0%d p.m.",tmp,m);
        }
    }
    else
    {
        if(tmp<=11)
        {
            printf("%d:%d0 a.m.",tmp,m);
        }
        else
        {
            printf("%d:%d0 p.m.",tmp,m);
        }
    }



    return 0;
}
