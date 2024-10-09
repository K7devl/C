#include "pila.h"

void ingre(Pila *pila, int *cant){
    int i, aux, aux1;
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf(" %d", &aux1);
    *cant = *cant + aux1;
        for(i=0;i<aux1;i++){
            printf("Ingrese el numero <%d> ", i);
            scanf(" %d", &aux);
            push(pila, aux);
        }
}

void muestra(Pila *pila, int cant){
    int i;
    for(i=cant;i>0;i--){
        printf("Numero <%d> ----> %d\n", i, copyy(pila));
        suppress(pila);
    }
}

int main(){
    Pila pila;
    int cant, i;
    cant = 0;
    init(&pila);
    ingre(&pila, &cant);
    muestra(&pila, cant);
}
