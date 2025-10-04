#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (b < c) {
        if (b <= d && d <= c) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } 
    else {  
        if (c <= d && d <= b) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
