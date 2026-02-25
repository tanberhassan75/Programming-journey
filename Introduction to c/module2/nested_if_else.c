#include <stdio.h>
int main()
{
int tk;
scanf("%d",&tk);
if(tk>=5000)
{
    printf("coxs bazar jabo\n");

    if(tk>=10000)
    {
        printf("bandarban o jabo\n");
    }
     else if(tk>=2000)
    {
        printf("nepal o jabo\n");
    }
    else
    {
        printf("coxs thekei ferot chole asbo\n");
    }
}
else
{
    printf("basay chole asbo\n");
}
return 0;
}