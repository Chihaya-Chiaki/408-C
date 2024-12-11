#include <stdio.h>

int add(int x,int y){
    int z=x+y;
    return z;
    }
int main(){
    int a,b,sum;
    
    scanf("%d %d",&a,&b);
    sum=add(a,b);

    printf("sum=%d\n",sum);

    return 0;
    }
