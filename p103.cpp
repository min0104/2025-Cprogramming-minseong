#include<stdio.h>
int n;
void f(){
    printf("*");
}
int main(){
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
    f();
    }
}