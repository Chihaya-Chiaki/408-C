#include <stdio.h>

int main(){
    // char ch='A';
    // putchar(ch);
    // putchar('A');
    
    // char ch;
    // ch=getchar();
    // printf("%c\n",ch);

    char ch[20];
    for(int i=0;i<20;i++)
         ch[i]=getchar();
    //for(int i=0;i<20;i++)
    puts(ch);
        // putchar(ch[i]);

    return 0;
}