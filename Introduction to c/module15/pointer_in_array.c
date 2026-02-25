#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
printf("0-->%p \n",&a[0]);
printf("1-->%p \n",&a[1]);
printf("2-->%p \n",&a[2]);
printf("3-->%p \n",&a[3]);
printf("4-->%p \n",&a[4]);
printf(">%p \n",a);
printf(">%d \n",*a);
*(a+2)=100; // array er a pointer wise kaj kore 
// array er a / nam er moddhe array er 0 number index er value thake 
for(int i=0; i<5; i++)
{
    printf("%d ",a[i]);
}
    return 0;
}