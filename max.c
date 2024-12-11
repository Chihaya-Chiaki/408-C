#include <stdio.h>

int max(int x,int y){
    return x>y?x:y;
    }

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("%d\n",c);
    return 0;
    }
