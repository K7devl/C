#include "tp7ej2.h"

void carga(Numeros *num, int *cant){
    int i, aux, aux1;
    printf("Ingrese la cantidad de numeros a cargar: ");
    scanf(" %d", &aux1);
    *cant = aux1;
    for(i=0;i<aux1;i++){
        printf("Ingrese el numerador <%d> ", i);
        scanf(" %d", &aux);
        set_num(num, aux, i);
        do{
            printf("Ingrese el denominador <%d> ", i);
            scanf(" %d", &aux);
            if(aux == 0){
                printf("El denominador no puede ser 0.\n");
            }
            set_den(num,aux,i);
        }while(aux == 0);
    }
}

void suma(Numeros *num){
    float resultado;
    int a,b;
    printf("Los numeros son: \n"
           "a) %d/%d\n"
           "b) %d/%d\n", get_num(num, 0), get_den(num, 0), get_num(num, 1), get_den(num, 1));
    a = ((get_num(num, 0)*get_den(num, 1))+(get_num(num, 1)*get_den(num, 0)));
    b = (get_den(num, 0)*get_den(num, 1));
    printf("La suma de esos numeros es: \n%d/%d\n", a, b);
    resultado = (a/b);
    printf("El resultado en decimales es: %.2f\n", resultado);
}

void prod(Numeros *num){
    int a,b;
    float resultado;
    printf("Los numeros son: \n"
           "a) %d/%d\n"
           "b) %d/%d\n", get_num(num, 0), get_den(num, 0), get_num(num, 1), get_den(num, 1));
    a = (get_num(num,0) * get_num(num,1));
    b = (get_den(num, 0)*get_den(num, 1));
    resultado = (a/b);
    printf("El producto entre a y b es: \n"
           "%d/%d\n", a, b);
    printf("El resultado en decimales es: %.2f\n", resultado);
}

void cociente(Numeros *num){
    int a,b;
    float resultado;
    printf("Los numeros son: \n"
           "a) %d/%d\n"
           "b) %d/%d\n", get_num(num, 0), get_den(num, 0), get_num(num, 1), get_den(num, 1));
    a = (get_num(num, 0)*get_den(num, 1));
    b = (get_den(num, 0)*get_num(num, 1));
    resultado = (a/b);
    printf("El cociente entre a y b es: \n"
           "%d/%d\n", a, b);
    printf("El resultado en decimales es: %.2f\n", resultado);
}

void sumatoria(Numeros *num, int cant){
    int a,b,i;
    float resultado;
    a=0;
    b=0;
    if(cant <= 2){
        printf("Son muy pocos numeros para sumar, utilice la funcion suma\n");
        return 0;
    }
    a += ((get_num(num, 0) * get_den(num, 1)) + (get_num(num, 1) * get_den(num, 0)));
    b += (get_den(num, 0)* get_den(num, 1));
    for(i=2;i<cant;i++){
        a = ((get_den(num, i) * a) + (get_num(num, i) * b));
        b *= (get_den(num, i));
    }
    resultado = (a/b);
    printf("La sumatoria de todos los numeros es: \n"
           "%d/%d\n", a, b);
    printf("El resultado en decimales es: %.2f\n", resultado);
}

void oper(Numeros *num, int cant){
    int i, sel;
    do{
        printf("<1> Suma de los primeros numeros.\n"
               "<2> Producto de los primeros numeros. \n"
               "<3> Cociente de los primeros numeros.\n"
               "<4> volver.\n");
        scanf(" %d", &sel);
        switch(sel){
            case 1: suma(num);break;
            case 2: prod(num);break;
            case 3: cociente(num);break;
            case 4: printf("Volviendo...\n");break;
        }
    }while(sel != 4);
}

int main(){
    Numeros num[10];
    int sel, cant, i;
    do{
        printf("\n\n******MENU******\n"
               "<1> Cargar numeros.\n"
               "<2> Realizar operaciones.\n"
               "<3> Sumar todos los numeros.\n"
               "<4> Salir.\n");
        scanf(" %d", &sel);
        switch(sel){
            case 1: carga(&num, &cant);break;
            case 2: oper(num, cant);break;
            case 3: sumatoria(num, cant);
            case 4: return 0;
        }
    }while(sel != 4);
}
