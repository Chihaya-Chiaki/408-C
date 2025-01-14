#include <stdio.h>
int main(){
    int k=10;
    switch(k+1){
        case 10:k++;break;
        case 11:++k;
        case 12:++k;break;
        default:k=k+1;
    }
    printf("%d\n",k);
    return 0;
}