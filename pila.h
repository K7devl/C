#include <stdio.h>
#define M 10


typedef struct{
    int tope;
    int pila[M];
}Pila;

int init(Pila *p){
    return p->tope = -1;
}

int isempty(Pila *p){
    if(p->tope == -1)
        return 1;
}

int isfull(Pila *p){
    if(p->tope == M)
        return 1;
}

void push(Pila *p, int x){
    p->tope++;
    p->pila[p->tope] = x;
}

void suppress(Pila *p){
    p->tope--;
}

int copyy(Pila *p){
    return p->pila[p->tope];
}
