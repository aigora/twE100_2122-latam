#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define v 21
#define h 65
#define n 1230
#define l 17
#define q 2
#define a 5

typedef struct{
int x,y;
int modx,mody;
char imagen;

}snake;

typedef struct{
int x,y;
}manz;
typedef struct{
int x,y;
int modx,mody;
char coche;

}car;

car tu[q];
car ia[q];

snake ser[n];
manz fru;

void inicioc(char mapac[l][a]);
void inputmapac(char mapac[l][a]);
void printmapc(char mapac[l][a]);
void inputdatoc(char mapac[l][a]);
void inputc(char mapac[l][a],int *muerte);
void reescribirc(char mapac[l][a]);
void inputdato2c(char mapac[l][a]);
void buclec(char mapac[l][a]);
void inicio(int *tam,char mapa[v][h]);
void inputmapa(char mapa[v][h]);
void inputdato(char mapa[v][h],int tam);
void printmap(char mapa[v][h]);
void bucle(char mapa[v][h], int tam);
void input(char mapa[v][h], int *tam, int *muerte);
void reescribir(char mapa[v][h],int tam);
void inputdato2(char mapa[v][h], int tam);
void introduccion();
void juego1();
void snakez();
void texto1 ();
void ahorcado();
void texto2 ();
void coches();
void texto3 ();
void texto4 ();

int main()
{
int perro;
int gato;
char usuario [30];
char contrase [30];
FILE *iniciosesion;
char nombre [30];
int fecha ;
FILE *iniciosesionfecha;
char registronombre [30];
char contrasena[30] ;
FILE *registro;
int elegir;
elegir=0;
printf("Elige entre las opciones introduciendo el numero de delante\n");
printf("10 Iniciar sesion con el email \n ");
printf("20 Registrarse\n");
printf("Opcion:");
scanf("%i", &elegir);
switch (elegir)
{
case 10://Iniciar sesion

iniciosesion=fopen ("INICIOSESION.txt", "a");
printf ("introduzca su usuario\n");
scanf ("%s", usuario);
printf("introduzca su contrasena\n");
scanf ("%s", contrase);
fprintf (iniciosesion, "USUARIO\n CONTRASEÑA\t");
fprintf(iniciosesion, "%s\n", usuario);
fprintf(iniciosesion, "%s", contrase);

fclose (iniciosesion);

printf("¿Que quieres hacer? \n");
printf("40 Salir. \n");
printf("50 Jugar. \n");

scanf("%i", &elegir);


        switch (elegir)
            {
            case 40://Salir
            elegir=0;

            break;

            case 50://Jugar
            elegir=0;
            printf("Eres un detective en colombia.");
            introduccion();
            juego1();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &gato);
            texto1();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &perro);
            snakez();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &gato);
            texto2();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &gato);
            ahorcado();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &gato);
            texto3();
            printf("Continuamos, pulsa cualquier numero\n");
            scanf("%i", &gato);
            coches();
            texto4();

            break;


        }
        break;





case 20://Registrarse
elegir=0;
printf ("Registarse\n");

registro=fopen ("Registro.txt", "a");
printf ("introduzca su nombre\n");
scanf ("%s", registronombre);
printf("introduzca contraseña\n");
scanf ("%s", contrasena);
fprintf (registro, "USUARIO\n CONTRASEÑA\t");
fprintf(registro, "%s\n", registro);
fprintf(registro, "%i", contrasena);

fclose (registro);
}
}
void introduccion(){
int primero;
int puerta;
int salida;
int operacion, operacion2, operacion3;
int b,c,d;

printf("^ANYO 2017^\n");
printf("Mi nombre es Sven, naci en Noruega en 1986. Estudie en la Universidad Politecnica de Madrid, donde curse\n");
printf("ingenieria industrial. Despues de 7 largos anyos suspendiendo mas que aprobando, logre graduarme y entrar en una empresa\n");
printf("Tras unos cuantos años trabajando alli, decidi cambiar mi vida\n");
printf("embarcandome en un viaje muy loco. Mientras escribo esto me dirijo hacia Nueva York en el S.S.ANNE\n");
printf("donde espero encontrar un buen trabajo y formar una bonita familia.Mi destino es Estados Unidos por la pasion\n");
printf(" que tenia mi madre por su vieja Colorado.Aun recuerdo esas calidas tardes donde me contaba sus anecdotas. Como la echo de menos\n");
printf("*AL DIA SIGUIENTE* ¡QUE HA SIDO ESO!Ha sonado un fuerte estruendo, como si hubiera habido un impacto contra algo.       *MEGAFONIA:ATENCION A TODOS LOS PASAJEROS\n");
printf("HA HABIDO UN PERCANCE, ESTAMOS INTENTANDO REPARARLO, QUE NO CUNDA EL PANICO.* Vale, necesito subir a cubierta para ver  que esta pasando. Hay tres puertas, sin ningun cartel\n");
}
void juego1(){
int primero;
int puerta;
int salida;
int operacion, operacion2, operacion3;
int b,c,d;

	printf("¿Cual de todas las puertas sera? *Introduce numero de puerta, 1 o 2*\n");
scanf("%i",&puerta);


if(puerta == 1)
{

	printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
    printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
    printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
    printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
    printf("Volvere atras mejor\n");
	printf("*Introduce el numero de otra puerta 2*\n");
	scanf("%i",&puerta);
}
	if(puerta==2)
{

    printf("Esta puerta esta chapada, voy a tener que buscar alguna llave\n");
    printf("*Se ha abierto una nueva puerta 3*\n");
    printf("Introduce el número de puerta 3\n");
    scanf("%i",&puerta);
    if(puerta==3)
    {
    printf("Vale, esto parece un camarote, voy a mirar\n");
	printf("*Hay una comoda y una mesilla, voy a mirar en la comoda\n");
	primero = 4;
	if(primero==4)
	{
		printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
        primero = 5 ;
		if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
			printf("Anda si ahi habia una estanteria, voy a mirar");
			printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");

			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}
}

}

}

		}

		else if(puerta==1)
		{
			printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
    printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
    printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
    printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
    printf("Volvere atras mejor\n");
	printf("*Introduce el numero de otra puerta*\n");
	scanf("%i",&puerta);
	if(puerta==3)
	{
		printf("Vale, esto parece un camarote, voy a mirar\n");
	printf("*Hay una comoda(4), una mesilla(5) y una estanteria(6), donde deberia mirar primero?");
	scanf("%i",&primero);
	if(primero==4)
	{
		printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
		printf("Introduce (5) o (6)\n");
		scanf("%i",&primero);
		if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
			printf("Ya solo me queda mirar en la estanteria.\n");
			printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
	}


		else if(primero==6)
		{
			printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, veamos mas puertas!\n");
		}
	}
	if(primero==5)
	{
		printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
		printf("Introduce (4) o (6)\n");
		scanf("%i",&primero);
		if(primero==4)
		{
			printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
			printf("Ya solo me queda mirar la estanteria. BINGO! Aqui esta la llave, voy a la puerta 2\n");
			printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3/=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}
		}
		else if(primero==6)
		{
			printf("b");
		}

	}

		printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}







	}
	else if(primero==5)
	{
		printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, no hay nada util\n");
		printf("Introduce (4) o (6)\n");
		scanf("%i",&primero);
		if(primero==4)
		{
		printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
		printf("Ya solo me queda mirar en la estanteria.\n");
		printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");


		printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3/=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}
}

		}
	}//primero m
	else if(primero==6)
	{
		printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, veamos mas puertas!\n");
	}
	}




	else if(puerta==3)
{
	printf("Esto parece un camarote, voy a investigarlo\n");
	printf("*Hay una comoda(4), una mesilla(5) y una estanteria(6), donde deberia mirar primero?");
	scanf("%i",&primero);
	if(primero==4)
	{
		printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
		printf("Introduce (5) o (6)\n");
		scanf("%i",&primero);
		if(primero==5)
		{
			printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, alucino\n");
			printf("Ya solo me queda mirar en la estanteria.\n");
			printf("BINGO!Aqui esta la llave, volvamos a la puerta 2!\n");
		}
		else if(primero==6)
		{
			printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, vamos a otra puerta!\n");
			if(puerta==1)
			{
				printf("Aiba, esta es la cocina, pero ya que estoy aqui podria preguntar a alguien.\n");
            printf("Hola buenas, sabe usted que ha sido ese gran estruendo.\n");
            printf("COCINERO: Caballero que hace usted aqui, vayase ahora mismo o llamare a seguridad!\n");
            printf("Oiga usted calmese, solo venia a preguntar. (Que raro, porque ha reaccionado asi?)\n");
            printf("Volvere atras mejor\n");
	        printf("*Introduce el numero de otra puerta*\n");
	        scanf("%i",&puerta);
			}
		}

	}
	else if(primero==5)
	{
		printf("Aqui lo unico que hay son ropa interior sudada y mucho polvo, no hay nada util\n");
		printf("Introduce (4) o (6)\n");
		scanf("%i",&primero);
		if(primero==4)
		{
		printf("Voy a mirar en el cajon de arriba. *Hay una camisa blanca sudada, y una medalla al honor de Estados Unidos\n");
		printf("Ya solo me queda mirar en la estanteria.\n");
		printf("BINGO!Aqui hay una llave, vayamos a la puerta 2!\n");

		printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3/=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}
}

		}
	}//primero m
	else if(primero==6)
	{
		printf("Vale, vamos a revisar la estanteria, Veamos, hay un libro, una gorra y... BINGO! Aqui hay una llave, a la puerta 2!\n");


		printf("Bien, ya estoy en la puerta 2, vamos a probar la llave\n");
printf("YEESS!La llave abrio la puerta y entro una gelida ventisca Joder que frio\n");
printf("Ahi esta el capitan con unos cuantos oficiales, ire a preguntar que pasa\n");
printf("Buenos dias caballeros, cual es la incidencia?\n ");
printf("CAPITAN: Hey tu, que te crees que estas haciendo aqui, la salida esta restringida\n");
printf("Disculpe usted, pero no podia quedarme quieto en mi camarote\n");
printf("CAPITAN: Salga inmediatamente de aqui, o tendre que llamar a seguridad\n");
printf("Pero podria decirme que ha pasado?\n");
printf("CAPITAN: Ha habido un impacto contra un elemento que no hemos podido identificar, estamos evaluando los danyos\n");
printf("CAPITAN: Ahora marchate a tu camarote inmediatamente\n");
printf("UNOS MINUTOS DESPUES: ATENCION A TODOS LOS PASAJEROS, SALGAN TODOS A CUBIERTA, EL BARCO SE HUNDE\n");
printf("Joder, me cago en la puta.\n");
printf("UNA VEZ FUERA CAPITAN: Calma a todos, hemos localizado unos cuantos barcos que se dirigen hacia aqui,\n");
printf("CAPITAN: Cuando lleguen nos rescataran y volveremos sanos y salvos a tierra.");
printf("UN RATO DESPUES (Vale, esta mierda se hunde antes de que llegue nadie, deberia ir buscando alguna manera de sobrevivir)\n");
printf("(Tenemos varias opciones: intentar aguantar en el barco hasta el final(1)o meternos ya en el agua e\n");
printf("intentar buscar algun trozo de madera(2))\n");
scanf("%i",&salida);
if(salida==1)
{
printf("Lo mejor es quedarnos en el barco y esperar, para intentar evitar el agua lo mas posible\n");
printf("DESCONOCIDO: Eh tu, ven aqui. (Se referira a mi?)\n");
printf("Es a mi?\n");
printf("DESCONOCIDO: Si, ven aqui. Soy mecanico, pero las matematicas son lo mio, necesito que me ayudes con eso\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?");
		scanf("%i",&operacion3);
		if(operacion3!=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda\n");
		}
	}
}
}

else if(salida==2)
{
printf("En mi opinion lo mejor es irme al agua antes de que sea demasiado tarde\n");
printf("Veamos, lo primero es intentar tocar el agua, a ver a que temperatura esta\n");
printf("(El agua ronda los 3.6ºC). Ostia, esta helada\n");
printf("DESCONOCIDO:EH tu, donde vas, que el agua es gelida, si te metes te vas a congelar.\n");
printf("Quien eres tu?MECANICO: Soy un mecanico del barco, estoy evaluando los danyos del barco.\n");
printf("MECANICO: Por cierto, ya que estas ven aqui y me ayudas, necesito hacer ciertos calculos, las mates no son lo mio.\n");
printf("Vale dime, que necesitas\n");
printf("MECANICO: Cuanto es la raiz de 144?\n");
scanf("%i",&operacion);
if(operacion!=12)
{
printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

}
else if(operacion==12)
{
	printf("*CORRECTO*");
	printf("MECANICO: Bien, cuanto es 13x10+15\n");
	scanf("%i",&operacion2);
	if(operacion2!=145)
	{
	printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

	}
	else if(operacion2==145)
	{
		printf("*CORRECTO");
		printf("MECANICO: Genial, por ultimo, cuanto es (134+15)x2-17?\n");
		scanf("%i",&operacion3);
		if(operacion3/=281)
		{
		printf("GAME OVER, DEBES EMPEZAR EL JUEGO DE NUEVO");

		}
		else if(operacion3==281)
		{
			printf("*CORRECTO*");
			printf("MECANICO: Perfecto, muchas gracias por tu ayuda");
		}
	}
}
}

	}//primero e
	}//puerta 4
}
}
}
}

void snakez(){
int tam;
char mapa[v][h];

inicio(&tam,mapa);
bucle(mapa,tam);

system("pause");

}
void ahorcado(){
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
}
else {
            printf("\n\n");
    printf("Has perdido.");
}

printf("\n\n");
system("pause");
}
void coches(){
char mapac[l][a];

inicioc(mapac);
buclec(mapac);

}
void texto1 ()
{
printf("\n\n\n\nEl barco se ha empezado a hundir mas rápido de lo que la flota y los tripulantes pensaban y al abrir los ojos, te encuentras que la marea te ha llevado a una isla desierta\n");
printf("Lo primero que sientes es la boca seca, y una sensacion de hambre desmesurada\n");
printf("pensamiento interno Tengo que buscar algo de comer si quiero sobrevivir\n");
printf("Sin saber como, te ves convertido en serpiente, crees que es por las horas sin comer o el cansancio\n");
}
void texto2()
{
printf ("\n\n\n\nCon el estomago lleno y tropecientos cocos comidos se ven las cosas de otra manera, pero sientes que te invade una sensacion de agobio al no ver a nadie\n");
printf("Echas a andar y despues de varios kilometros, empiezas a oir voces y canticos de humanos\n");
printf("Cual es tu sorpresa cuando te acercas y ves una tribu indigena\n");
printf("pensamiento interno ¿Voy hacia ellos? ¿Me alejo? Ire\n");
printf("Indigena 1:si quieres pertener a nuestra tribu deberás pasar la prueba DIOSA\n");

}
void texto3 ()
{
printf("\n\n\n\nYa eres una celebridad para ellos, y te tratan como uno de sus reyes.\n");
printf("Decides dar un paseo para conocer mejor la isla\n");
printf("pensamiento interno ¿QUE?¿ESCUCHO UN MOTOR?No puede ser\n");
printf("Te acercas a donde proviene el ruido y tus ojos no dan credito a lo que ven: UN COCHE\n");
printf("Es tu oportunidad para salir de ahi\n");
printf("Llegas al coche y adios a esta isla infernal\n");
}
void texto4 ()
{

 printf ("ADIOS LATAM\n");
}
void inicio(int *tam,char mapa[v][h]){
int i;
i=0;

ser[0].x = 32;
ser[0].y = 10;

*tam = 4;

srand(time(NULL));

fru.x = rand() % (h-1);
fru.y = rand() % (v-1);

while(fru.x == 0){

fru.x = rand() % (h-1);
}
while(fru.y == 0){

fru.y = rand() % (v-1);
}
for (i=0; i<*tam; i++){

ser[i].modx = 1;
ser[i].mody = 0;
}
inputmapa(mapa);
inputdato(mapa, *tam);

}

void inputmapa(char mapa[v][h]){//Creamos el mapa
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

void inputdato(char mapa[v][h],int tam){//Datos del mapa
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
mapa[fru.y][fru.x] = 6;
}

void printmap(char mapa[v][h]){
int i,j;

for(i=0; i<v;i++){
for(j=0;j<h;j++){
printf("%c", mapa[i][j]);
}
printf("\n");
}
}

void bucle(char mapa[v][h], int tam){

int muerte;
muerte = 0;

do{
system("cls"); //system("clear"); en Linux
printmap(mapa);
input(mapa, &tam, &muerte);
reescribir(mapa,tam);

}while(muerte == 0 && tam<24);

}

void input(char mapa[v][h], int *tam, int *muerte){
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

if(ser[0].x == fru.x && ser[0].y == fru.y ){
    *tam += 1;
    ser[*tam-1].imagen = 'x',


    fru.x = rand() % (h-1);
    fru.y = rand() % (v-1);

    while(fru.x == 0){

    fru.x = rand() % (h-1);
    }
    while(fru.y == 0){

    fru.y = rand() % (v-1);
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
void reescribir(char mapa[v][h],int tam){
inputmapa(mapa);

inputdato2(mapa, tam);

}

void inputdato2(char mapa[v][h], int tam){
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

mapa[fru.y][fru.x] = 6;
}
void inicioc(char mapac[l][a]){
int i;
i=0;

srand(time(NULL));

tu[0].x = 2;
tu[0].y = 16;
ia[0].x = rand() % (a-1);

while(ia[0].x == 0){

ia[0].x = rand() % (a-1);
}
ia[0].y = 0;

for (i=0; i<q; i++){

ia[i].mody = 1;
}
inputmapac(mapac);
inputdatoc(mapac);
}

void inputmapac(char mapac[l][a]){
int i,j;
i=0;
j=0;

for (i=0;i<l;i++){
    for (j=0;j<a;j++){
        if (j == 0 || j == a-1){
            mapac[i][j]= '|';
        }
        else{
            mapac[i][j]= ' ';
        }
    }
}
}

void printmapc(char mapac[l][a]){
int i,j;

for(i=0; i<l;i++){
for(j=0;j<a;j++){
printf("%c", mapac[i][j]);
}
printf("\n");
}
}

void inputdatoc(char mapac[l][a]){//Datos del mapa
int i;
i=1;

for(i=1; i<q;i++){
ia[i].x = ia[i-1].x ;
ia[i].y = ia[i-1].y + 1;

tu[i].x = tu[i-1].x;
tu[i].y = tu[i-1].y - 1;

ia[i].coche = 'º';
tu[i].coche = 'º';
}

ia[0].coche = 'º';
tu[0].coche = 'º';

for (i=0; i<q; i++){
mapac[ia[i].y][ia[i].x] = ia[i].coche;
}
for (i=0; i<q; i++){
mapac[tu[i].y][tu[i].x] = tu[i].coche;
}
}
void buclec(char mapac[l][a]){

int muerte;
muerte = 0;

do{
system("cls"); //system("clear"); en Linux
printmapc(mapac);
inputc(mapac, &muerte);
reescribirc(mapac);

}while(muerte == 0);

}
void inputc(char mapac[l][a], int *muerte){
int i;
i=1;
char letra;

for(i=1; i<q && *muerte == 0 ; i++){
    if(tu[0].x == ia[i].x && tu[0].y == ia[i].y){
        *muerte = 1;
    }
}

if(ia[0].y == 17){
    ia[0].x = rand() % (a-1);

    while(ia[0].x == 0){

    ia[0].x = rand() % (a-1);
    }
    ia[0].y = 0;
    }
if(*muerte == 0){
    if(kbhit() == 1){
       letra = getch();
       }
       if(letra == 'a' && tu[0].x !=1){
        tu[0].x += -1;
        tu[0].mody = 0;
       }
       if(letra == 'd' && tu[0].x !=3){
        tu[0].x += 1;
        tu[0].mody = 0;
       }
    }
}
void reescribirc(char mapac[l][a]){
inputmapac(mapac);

inputdato2c(mapac);

}
void inputdato2c(char mapac[l][a]){
int i;
i= q-1;
for(i=q-1; i>0; i--){
tu[i].x = tu[i-1].x;

}
i= q-1;
for(i=q-1; i>0; i--){
ia[i].x = ia[i-1].x;
ia[i].y = ia[i-1].y;
}

ia[0].x += ia[0].modx;
ia[0].y += ia[0].mody;

for(i=0; i<q; i++){
    mapac[tu[i].y][tu[i].x] = tu[i].coche;
    mapac[ia[i].y][ia[i].x] = ia[i].coche;
}
}
