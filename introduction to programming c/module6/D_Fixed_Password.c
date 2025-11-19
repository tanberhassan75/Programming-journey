#include<stdio.h>
int main()
{
int pass;
while(scanf("%d",&pass))
//ekhane jotober inport debe totobar looop cholbe 
{
    if(pass == 1999)
    {
        printf("Correct\n");
        break;
        //jokhon e condition right hobe tokhon e loop ta break ta stop kore dibe
    }
    else
    {
        printf("Wrong\n");
    }
}
    return 0;
}
//eta for loop diye o kora jay sudhu inisilization and increment dicrement er jaygay ta faka rakhte hobe