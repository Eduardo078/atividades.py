#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;
        while(x <=20){
            if (x % 2 != 0){
            printf("%d", x);
            }
            x++;
        }
    system ("pause");   
    return 0;
}