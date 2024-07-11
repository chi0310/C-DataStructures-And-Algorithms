#include <stdio.h>

int round(float num){
    return num >= 0 ? int(num+0.5) : int(num-0.5);
}

int main(){
    float num = 5.478;
    printf("%d\n", round(num));
    num = -5.478;
    printf("%d\n", round(num));
}