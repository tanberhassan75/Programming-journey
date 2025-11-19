#include <stdio.h>
int  main()
{
int tk;
scanf("%d",&tk);
if (tk>=100)
{
    printf("burger paben sir\n");
}    
else if(tk>=50) // ekhane joto iccha else if bosano jabe 
{
    printf("chips paben sir\n");
}
else if(tk>=30)
{
    printf("chaa paben sir\n");
}
else
{
    printf("kichu paben na sir basay jan");
}
    return 0;
}