#ifndef TURNO_H_INCLUDED
#define TURNO_H_INCLUDED

typedef struct{
    int indice;
    char nombre[31];
    float precio;
}Tratamientos;

typedef struct{
    int dia;
    int mes;
    int anio;
    int hora; //formato 24hs........as:das
}Fecha;

typedef struct{
    int idTurno;
    char nombre[31];
    char apellido[31];
    int idCliente;
    Tratamientos trat[10];
    int cantTrat;
    char forma_de_pago[20];
    float total;
    Fecha fecha;
    int realizado;
}Turno;


void set_initTotal(Turno *t){
    t->total = 0;
}

void set_cantTrat(Turno *t, int x){
    t->cantTrat = x;
}

void set_idTurno(Turno *t, int id){
    t->idTurno = id;
}

void set_total(Turno *t, float x){
    t->total = x;
}

void set_nombre(Turno *t, char x[]){
    strcpy(t->nombre,x);
}

void set_idCliente(Turno *t, int x){
    t->idCliente = x;
}

void set_initTratamientos(Turno *t){
    int i;
    strcpy(t->trat[0].nombre, "Unias");
    strcpy(t->trat[1].nombre, "Pestanias");
    strcpy(t->trat[2].nombre, "Peluqueria");
    strcpy(t->trat[3].nombre, "Depilacion");
    strcpy(t->trat[4].nombre, "Nutrición capilar");
    strcpy(t->trat[5].nombre, "Bronceado");
    strcpy(t->trat[6].nombre, "Limpieza facial");
    strcpy(t->trat[7].nombre, "Perfilado de cejas");
    strcpy(t->trat[8].nombre, "Spa");
    strcpy(t->trat[9].nombre, "Maquilladora");
    t->trat[0].precio =  5000;
    t->trat[1].precio =  4000;
    t->trat[2].precio =  9500;
    t->trat[3].precio =  12000;
    t->trat[4].precio =  18700;
    t->trat[5].precio =  15000;
    t->trat[6].precio =  11300;
    t->trat[7].precio =  7500;
    t->trat[8].precio =  22000;
    t->trat[9].precio =  5000;
    for(i=0;i<10;i++){
        t->trat[i].indice = 0;
    }
}

void set_tratamientos(Turno *t, int x){
    t->trat[x].indice = t->trat[x].indice+1;
}

void set_forma_de_pago(Turno *t, int x){
    if(x==1)
        strcpy(t->forma_de_pago, "Efectivo");
    if(x==2)
        strcpy(t->forma_de_pago, "Debito");
    if(x==3)
        strcpy(t->forma_de_pago, "Credito");
    if(x==4)
        strcpy(t->forma_de_pago, "QR");
}

int get_indFormaDePago(Turno t){
    if(strcmp(t.forma_de_pago, "Efectivo")==0)
        return 1;
    if(strcmp(t.forma_de_pago, "Debito")==0)
        return 2;
    if(strcmp(t.forma_de_pago, "Credito")==0)
        return 3;
    if(strcmp(t.forma_de_pago, "QR")==0)
        return 4;

    return 0;
}

void set_realizado(Turno *t, int x){
    t->realizado = x;
}

void set_dia(Turno *t, int x){
    t->fecha.dia = x;
}

void set_apellido(Turno *t, char x[]){
    strcpy(t->apellido, x);
}

void set_mes(Turno *t, int x){
    t->fecha.mes = x;
}

void set_anio(Turno *t, int x){
    t->fecha.anio = x;
}

void set_horario(Turno *t, int x){
    t->fecha.hora = x;
}

char* get_nombreTratamiento(Turno t, int i){
    char *aux = (char*)malloc(strlen(t.trat[i].nombre)+1);
    strcpy(aux, t.trat[i].nombre);
    return aux;
}

int get_indiceTratamientos(Turno t, int i){
    return t.trat[i].indice;
}

float get_preciosTratamientos(Turno t, int i){
    return t.trat[i].precio;
}

int get_cantTratamientos(Turno t){
    int i, cont;
    cont = 0;
    for(i=0;i<10;i++){
        cont = cont + t.trat[i].indice;
    }
    return cont;
}

int get_dia(Turno t){
    return t.fecha.dia;
}

int get_mes(Turno t){
    return t.fecha.mes;
}

int get_anio(Turno t){
    return t.fecha.anio;
}

int get_horario(Turno t){
    return t.fecha.hora;
}

char* get_nombre(Turno t){
    char *aux = (char*)malloc(strlen(t.nombre)+1);
    strcpy(aux, t.nombre);
    return aux;
}

int get_idTurno(Turno t){
    return t.idTurno;
}

int get_idCliente(Turno t){
    return t.idCliente;
}

char* get_formaDePago(Turno t){
    char *aux = (char*)malloc(strlen(t.forma_de_pago)+1);
    strcpy(aux, t.forma_de_pago);
    return aux;
}
char* get_apellido(Turno t){
    char *aux = (char*)malloc(strlen(t.apellido)+1);
    strcpy(aux, t.apellido);
    return aux;
}

int get_realizado(Turno t){
    return t.realizado;
}

float get_total(Turno t){
    return t.total;
}



#endif // TURNO_H_INCLUDED
