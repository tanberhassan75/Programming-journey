#include<stdio.h>
#include<string.h>
int main()
{
char n[20];
// gets(n); ei holo gets er kaj
fgets(n,22,stdin);
printf("%s",n);
    return 0;
}
// note Fgets enter keo o input niye fele
// null charecter holo \0