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

int main ()
{
struct jugadores usuarios [10];
int elegir, num=0, i,correcto=0;
int ganar;

char usuario1 [20], usuario2[20], contra[20];
FILE *registro;
registro= fopen ("usuarios.txt", "r");
	if (registro == NULL) {
		printf("Error al abrir el archivo\n");
		return 0;
	}
	while (fscanf(registro, "%s %s %s %s", usuarios[num].usuario, usuarios[num].nombre, usuarios[num].apellido,  usuarios[num].contrasena ) != EOF) {

		num++;
	}

	fclose(registro);
	printf ("desea que quiere hacer (1) registrar nuevo usuario\n(2) iniciar sesion\n(3) salir.\n");
	scanf ("%d", &elegir);
	switch (elegir)
	{
    case 1:
        do {
            printf ("Nombre de usuario.\n");
            scanf ("%s", usuario1);
            for (i=0; i<num; i++)
            {
                if (strcmp(usuarios[i].usuario, usuario1) == 0) {
						printf("Nombre de usuario ya registrado, por favor escoja otro nombre de usuario\n");
						break;
            }
        }

	}while (strcmp(usuarios[i].usuario, usuario1) == 0);
if (strcmp(usuarios[i].usuario, usuario1) != 0) {

					strcpy(usuarios[num].usuario, usuario1);
			}
            fflush(stdin);
            printf("Nombre\n");
			gets(usuarios[num].nombre);
			printf("Apellido\n");
			scanf("%s", usuarios[num].apellido);
			fflush(stdin);
			printf("Contrasena\n");
				gets(usuarios[num].contrasena);
				num++;
				printf("REGISTRO REALIZADO CON ÉXITO\n");
				latam();


			printf("\n");
    FILE *registro;
    		registro = fopen("usuarios.txt", "w");

    		for (i= 0; i < num; i++) {
    			fprintf(registro, "%s %s %s %s\n", usuarios[i].usuario, usuarios[i].nombre, usuarios[i].apellido, usuarios[i].contrasena);
			}
    		fclose(registro);

    		fflush(stdin);
    case 2:
        do{
        correcto=0;
        printf ("\n");
        printf("Nombre de usuario:\n");
				scanf("%s", usuario2);
				fflush(stdin);
				printf("Contrasena:\n");
				scanf("%s",contra);
				fflush(stdin);
				printf("\n");
				for (i = 0; i < num; i++) {
					if (strcmp(usuarios[i].usuario, usuario2) == 0 && strcmp(usuarios[i].contrasena, contra) == 0) {
						printf("USUARIO Y CONTRASEÑA CORRECTO\n sesion iniciada con exito\n");
						correcto = 1;
						latam();

						break;
					}
				}
				if (correcto == 0) {
						printf("USUARIO O CONTRASEÑA INCORRECTOn");
					}
			} while (strcmp(usuarios[i].usuario, usuario2) != 0 || strcmp(usuarios[i].contrasena, contra) != 0);



  case 3:

    		printf("Hasta pronto...\n");
    		fflush(stdin);
    		printf("\n");
    		return 0;

}

}




void intro ()
{
     int operacion, operacion2, operacion3;

printf("^ANYO 2017^\n");
printf("Mi nombre es Sven, naci en Noruega en 1986. Estudie en la Universidad Politecnica de Madrid, donde curse\n");
printf("ingenieria industrial. Despues de 7 largos anyos suspendiendo mas que aprobando, logre graduarme y entrar en una empresa\n");
printf("Tras unos cuantos años trabajando alli, decidi cambiar mi vida\n");
printf("embarcandome en un viaje muy loco. Mientras escribo esto me dirijo hacia Nueva York en el S.S.ANNE\n");
printf("donde espero encontrar un buen trabajo y formar una bonita familia.Mi destino es Estados Unidos por la pasion\n");
printf(" que tenia mi madre por su vieja Colorado.Aun recuerdo esas calidas tardes donde me contaba sus anecdotas. Como la echo de menos\n");
printf("*AL DIA SIGUIENTE* ¡QUE HA SIDO ESO!Ha sonado un fuerte estruendo, como si hubiera habido un impacto contra algo.       *MEGAFONIA:ATENCION A TODOS LOS PASAJEROS\n");
printf("HA HABIDO UN PERCANCE, ESTAMOS INTENTANDO REPARARLO, QUE NO CUNDA EL PANICO.* Vale, necesito subir a cubierta para ver  que esta pasando.\n");
printf ("Empieza el juego\n ¿QUIERES SALIR CON VIDA DE AQUI?\n ");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui.\n Soy mecanico, pero las matematicas no son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
exit (-1);

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
	exit (-1);

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");
	exit (-1);

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}


}
void texto1 ()
{
printf ("\n\n\n\nEl mecanico, para agradecerte tu ayuda, te proporciona un hueco en uno de los botes reservados para la tripulación y sin pensarlo ocupas el sitio");
printf("y empezais a remar, sin saber a donde.");
printf("Despues de muchas horas en alta mar, os puede el cansancio y os dormís.\n Al despertar, ves");
printf ("el bote en la orilla y a ti tirado en la playa.\n Te alegras de notar tierra firme");
    printf ("pero sientes que te invade una sensacion de agobio al no ver a nadie\n");
printf("Echas a andar y despues de varios kilometros, empiezas a oir voces y canticos de humanos\n");
printf("Cual es tu sorpresa cuando te acercas y ves una tribu indigena\n");
printf("pensamiento interno ¿Voy hacia ellos? ¿Me alejo? Ire\n");
printf("Indigena 1:si quieres pertener a nuestra tribu deberás pasar la prueba DIOSA\n");
}
void ahorcado ()
{
    char frase[60],rep[100],temporal[100];
char pal;
int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
int repetido=0,gano=0;

printf("\n\n\n\n\tJuego del Ahorcado\n");
printf("Introduzca la palabra a adivinar: ");
scanf("%s", &frase);

system("cls");

longitud = 0;
inicial = 0;
j = 0;

rep[0] = ' ';
rep[1] = '\0';


do {
            system("cls");
    temp=0;

    if(inicial == 0) {
     for(i=0;i<strlen(frase);i++) {
      if(frase[i] == ' ') {
        temporal[i] = ' ';
         longitud++;
      }
      else {
         temporal[i] = '_';
         longitud++;
      }
     }
    }

    inicial = 1;

    temporal[longitud] = '\0';

    for(i=0;i<strlen(rep);i++) {
       if(rep[i] == pal) {
        repetido = 1;
        break;
      }
      else {
       repetido = 0;
     }
    }

    if(repetido == 0) {
     for(i=0;i<strlen(frase);i++) {
                if(frase[i] == pal) {
         temporal[i] = pal;
          acertado++;
          temp=1;
        }
      }
    }

    if(repetido == 0) {
     if(temp == 0) {
       oportunidades = oportunidades - 1;
     }
    }
    else {
     printf("Ya se ha introducido este caracter");
     printf("\n\n");
    }

    printf("\n");

    for(i=0;i<strlen(temporal);i++) {
     printf(" %c ",temporal[i]);
    }

    printf("\n");

    if(strcmp(frase,temporal) == 0) {
        gano = 1;
        break;
    }

    printf("\n");
    printf("Letras Acertadas: %d",acertado);
    printf("\n");
    printf("Oportunidades Restantes: %d",oportunidades);
    printf("\n");

    rep[j] = pal;
    j++;

    if (oportunidades==0)
    {
       break;
    }

    printf("Introduzca una letra:");
    scanf("\n%c",&pal);

}while(oportunidades != 0);


if(gano) {
            printf("\n\n");
    printf("Enhorabuena, has ganado.");
      texto2();
}
else {
            printf("\n\n");
    printf("GAME OVER, DEBES VOLVER A EMPEZAR EL JUEGO.");
    exit (-1);


}

printf("\n\n");
system("pause");

}
void snakez ()
{
    int tam;
char mapa[v][h];
int gana;

snake ser[n];
manz fru[q];

inicio(&tam,mapa,ser,fru);
gana=bucle(mapa,tam,ser,fru);
if(gana==1){
    printf("GAME OVER \n");
}
else{
    printf("¡Has ganado!\n");
    printf ("Puedes volver a casa!!\n");
}

system("pause");
}


void latam ()
{
    intro();
    texto1();
    ahorcado();

    snakez ();
}
void inicio(int *tam,char mapa[v][h],snake ser[n],manz fru[q]){
int i;
i=0;

ser[0].x = 32;
ser[0].y = 10;

*tam = 4;

srand(time(NULL));

fru[0].x = rand() % (h-1);
fru[0].y = rand() % (v-1);

while(fru[0].x == 0){

fru[0].x = rand() % (h-1);
}
while(fru[0].y == 0){

fru[0].y = rand() % (v-1);
}
for (i=0; i<*tam; i++){

    ser[i].modx = 1;
    ser[i].mody = 0;
}
inputmapa(mapa,ser,fru);
inputdato(mapa, *tam,ser,fru);

}

void inputmapa(char mapa[v][h],snake ser[n],manz fru[q]){//Creamos el mapa
    int i,j;
    i=0;
    j=0;

    for (i=0;i<v;i++){
        for (j=0;j<h;j++){
            if (i == 0 || i == v-1){
                mapa[i][j]= 244;
            }
            else if (j == 0 || j == h-1){
                mapa[i][j]= '|';
            }
            else{
                mapa[i][j]= ' ';
            }
        }
    }
}

void inputdato(char mapa[v][h],int tam,snake ser[n],manz fru[q]){//Datos del mapa
int i;
i=1;

for(i=1; i<tam;i++){
    ser[i].x = ser[i-1].x - 1;
    ser[i].y = ser[i-1].y;

    ser[i].imagen = 'x';
}

ser[0].imagen = 1;

for (i=0; i<tam; i++){
    mapa[ser[i].y][ser[i].x] = ser[i].imagen;
}
mapa[fru[0].y][fru[0].x] = 6;
}
void printmap(char mapa[v][h],snake ser[n],manz fru[q]){
int i,j;

for(i=0; i<v;i++){
    for(j=0;j<h;j++){
        printf("%c", mapa[i][j]);
    }
    printf("\n");
}
}

int bucle(char mapa[v][h], int tam,snake ser[n],manz fru[q]){

int muerte;
muerte = 0;

do{
    system("cls"); //system("clear"); en Linux
    printmap(mapa,ser,fru);
    input(mapa, &tam, &muerte,ser,fru);
    reescribir(mapa,tam,ser,fru);

}while(muerte == 0 && tam<18);
return muerte;

}

void input(char mapa[v][h], int *tam, int *muerte,snake ser[n],manz fru[q]){
int i;
i=1;
char letra;

    if(ser[0].x == 0 || ser[0].x == h-1 || ser[0].y == 0 || ser[0].y == v-1){
        *muerte = 1;
    }
    for(i=1; i<*tam && *muerte == 0 ; i++){
        if(ser[0].x == ser[i].x && ser[0].y == ser[i].y){
            *muerte = 1;
        }
    }

    if(ser[0].x == fru[0].x && ser[0].y == fru[0].y ){
        *tam += 1;
        ser[*tam-1].imagen = 'x',


        fru[0].x = rand() % (h-1);
        fru[0].y = rand() % (v-1);

        while(fru[0].x == 0){

        fru[0].x = rand() % (h-1);
        }
        while(fru[0].y == 0){

        fru[0].y = rand() % (v-1);
        }

    }
    if(*muerte == 0){
        if(kbhit() == 1){
           letra = getch();

           if(letra == 'w' && ser[0].mody !=1){
            ser[0].modx = 0;
            ser[0].mody = -1;
           }
           if(letra == 's' && ser[0].mody !=-1){
            ser[0].modx = 0;
            ser[0].mody = 1;
           }
           if(letra == 'a' && ser[0].modx !=1){
            ser[0].modx = -1;
            ser[0].mody = 0;
           }
           if(letra == 'd' && ser[0].modx !=-1){
            ser[0].modx = 1;
            ser[0].mody = 0;
           }
        }
    }

}
void reescribir(char mapa[v][h],int tam,snake ser[n],manz fru[q]){
 inputmapa(mapa,ser,fru);

 inputdato2(mapa, tam,ser,fru);

}

void inputdato2(char mapa[v][h], int tam,snake ser[n],manz fru[q]){
int i;
i= tam-1;
    for(i=tam-1; i>0; i--){
        ser[i].x = ser[i-1].x;
        ser[i].y = ser[i-1].y;
    }

    ser[0].x += ser[0].modx;
    ser[0].y += ser[0].mody;

    for(i=0; i<tam; i++){
        mapa[ser[i].y][ser[i].x] = ser[i].imagen;
    }

    mapa[fru[0].y][fru[0].x] = 6;
}


void texto2 ()
{
    printf("Has superado las dos primeras pruebas, estas muy cerca de volver a casa.\n");
    printf("Pero te falta superar la prueba más dificil... ¿serás capaz?\n Vamos a comprobarlo\n");
    printf("Te has adentrado en una selva muy frondosa, y no recuerdas la ultima vez que comiste, pero si quieres salir de aqui necesitas sacar fuerzas\n");
    printf("La prueba es la siguiente: comete las diferentes frutas que aparezcan en la pantalla\n");
    printf("Alla vamos\n");
}

