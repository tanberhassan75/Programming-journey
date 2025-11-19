#include<stdio.h>
int main(){
    char a[1005], b[1005];

    scanf("%s", a);
    scanf("%s", b);

    int x,y;
    scanf("%d %d", &x,&y);

    printf("%s", a);
    for(int i=x; i<=y; i++){
        printf("%c", b[i]);
    }
    return 0;
}