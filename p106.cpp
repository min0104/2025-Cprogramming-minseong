#include<stdio.h>
int n;
void f(int k){
    printf("*");
    printf("\n");
}
int main(){
    scanf("%d",&n);
    for (int i=1; i<=n;i++)
    f(i);
    
}