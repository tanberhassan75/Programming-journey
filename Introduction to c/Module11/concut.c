#include<stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s",&a, &b);
    int len1=strlen(a);
    int len2=strlen(b);
    int sum =len1+len2;
    for(int i=len1; i<=sum; i++)
    {
        a[i]=b[i-3];
    }
    printf("%s %s",a,b);
    return 0;
}
// strcat eta diye eusy concat kora jay strcat(a,b)