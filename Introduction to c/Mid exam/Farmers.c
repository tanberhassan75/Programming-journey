#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int val =(m1*d) / (m1+m2) ;
        int val2= d-val;
        printf("%d\n",val2);
    }

    return 0;
}