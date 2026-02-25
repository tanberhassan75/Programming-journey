#include<stdio.h>
int main()
{
int ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z')
//jodi small a and z er vhitore theke tahole capital A print hobe
{
    ch = ch - 32;
    printf("%c",ch);
    //capital and small letter er vhotore 32 er ekta gap thake
}
else
{
    ch = ch + 32;
    printf("%c",ch);
}
    return 0;
}