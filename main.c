#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Librerialatam.h"
#define v 21
#define h 65
#define n 1230
#define q 1


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
				    //nUsuarios++;
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
