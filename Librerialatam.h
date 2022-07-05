#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define v 21
#define h 65
#define n 1230
#define q 1
typedef struct{
    int x,y;
    int modx,mody;
    char imagen;


}snake;

typedef struct{
    int x,y;
}manz;
struct jugadores{
    char usuario [20];
    char nombre[20];
    char apellido [20];
    char contrasena [20];
};

void inicio(int *tam,char mapa[v][h],snake ser[n],manz fru[q]);
void inputmapa(char mapa[v][h],snake ser[n],manz fru[q]);
void inputdato(char mapa[v][h],int tam,snake ser[n],manz fru[q]);
void printmap(char mapa[v][h],snake ser[n],manz fru[q]);
int bucle(char mapa[v][h], int tam,snake ser[n],manz fru[q]);
void input(char mapa[v][h], int *tam, int *muerte,snake ser[n],manz fru[q]);
void reescribir(char mapa[v][h],int tam,snake ser[n],manz fru[q]);
void inputdato2(char mapa[v][h], int tam,snake ser[n],manz fru[q]);
void intro ();
void texto1 ();
void ahorcado();
void latam ();
void intro ();
void snakez ();
void texto2();
