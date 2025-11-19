#include<stdio.h>
void recursion(int i)// <-- ei khane return hocche
{
    if(i==6)
    {
        return;
    }
    recursion(i+1); // ei khan theke -->
    printf("%d\n",i);
}
int main()
{
    int i=1;
    recursion(i);
    return 0;
}
//same way te array string o print kora jay