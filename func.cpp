#include<stdio.h>

float x, y;


float h(float a){
    return(-a + 5);
}

float g(float b){
    return(3*b - 1);
}

float f(float c){
    return(c*c +1);
}

int main(){

    y = 0;
    scanf("%f", &x);

    y = f(g(h(x)));
    
    printf("%f", y);

    return 0;


}