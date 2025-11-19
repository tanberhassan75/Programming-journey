#include<stdio.h>
int main()
{
int x=100; // ekta variable declear seta moddhe 100 store 
printf("%d\n",x); // print variable er value
printf("%p\n",&x); // print variable er Address
int* ptr; // pointer variable nilam
ptr = &x; // pointer variable er vhitore 
          // X variable er Address ke Store korlam
printf("%d\n",*ptr); // pointer Variable er Address ke print
    return 0;
}