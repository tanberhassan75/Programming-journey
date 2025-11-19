#include<stdio.h>
int main()
{
int n;
scanf("%d",&n); // user theke input nilam
int sum = 0; // er sathe i er value + hobe
for(int i=1;i<=n;i++)
{
sum=sum + i; //sum er sathe i er value mani 1 + hocche loop seta ke bar bar korteche
}
printf("%d\n",sum); // loop er bahire printf korchi cause eta ekbar dekhte chai
    return 0;
}