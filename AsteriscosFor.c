#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta variable guarda la altura del triangulo*/
	int altura = 10;
	
	/*Esta variable guarada la base del triangulo*/
	int base = 1;
	
	/*Estas variables inicializan contadores*/
	int contador;
	int contadorDos;
	
	for(contador=1; contador<=altura; contador++){
		for(contadorDos=1; contadorDos<=base; contadorDos++){
			printf("*");
		}
		printf("\n");
		base++;
		
		//base++;
		//base = base+1;
		//base = base++;
	}
	
	return 0;
}
