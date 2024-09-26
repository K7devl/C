#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    int a,b;
}Numeros;


void set_num(Numeros *num, int aux, int i){
    num[i].a = aux;
}

void set_den(Numeros *num, int aux, int i){
    num[i].b = aux;
}

int get_num(Numeros *num, int i){
    return num[i].a;
}

int get_den(Numeros *num, int i){
    return num[i].b;
}
