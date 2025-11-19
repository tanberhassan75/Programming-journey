#include<stdio.h>
int main()
{
char a[101], b[101];
scanf("%s %s",&a,&b);
int lenth=strlen(b);
for(int i=0; i<=lenth; i++)
{
    a[i]=b[i];
}
printf("%s %s",a,b);
    return 0;
}
// note : advance strcpy(a,b) eta ekta building funtion 
// eta use kore eta string ke copy kore ar ekta vhitore rekha jay