#include <stdio.h>
#define M 10
typedef struct{
    int primero;
    int ultimo;
    char fila[M];
}Fila;

void init(Fila *f){
    f->primero = -1;
    f->ultimo = -1;
}

int isempty(Fila *f){
    if(f->ultimo == -1)
        return 1;
}

int isfull(Fila *f){
    if(f->ultimo == M)
        return 1;
}

void insertt(Fila *f, char x){
    f->ultimo++;
    f->fila[f->ultimo] = x;
    if(f->primero == -1){
        f->primero++;
    }
}

void suppress(Fila *f){
    f->primero++;
}

char copyy(Fila *f){
    return f->fila[f->primero];
}
