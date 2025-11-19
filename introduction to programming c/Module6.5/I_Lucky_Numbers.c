#include <stdio.h>
int main()
{
    int a;
    scanf("%d %d",&a);
    int val=a%10;// mod kore last number ta niyechi 
    int val2=a/10; //  divide kore last er ager ta niyechi

    if (val % val2 == 0 || 0 && val2 % val==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}