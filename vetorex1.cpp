#include <stdio.h>

int div_cin, contador;
bool passou;

int main(){

contador = div_cin = 0;
passou = false;

while(passou != true){
    contador++;
    if(contador % 5 == 0){
        div_cin++;
    }
    else if(contador >= 500){
        passou = true;
    }

    printf("contador em %d \n Divisoes por cinco: %d", contador - 1 , div_cin);

}

return 0;
}