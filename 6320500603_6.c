#include<stdio.h>
int main()
{
    int n,m,t;
    char c;
    scanf("%d %d %d",&n,&m,&t);
    fflush(stdin);
    scanf("%c",&c);
    if(m>n*2)
    {
        printf("R");
    }
    else
    {
        printf("L");
    }



    return 0;
}
