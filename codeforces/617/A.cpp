#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int answer=(x/5);
    if(x%5!=0)answer=answer+1;
    printf("%d\n",answer);
}
