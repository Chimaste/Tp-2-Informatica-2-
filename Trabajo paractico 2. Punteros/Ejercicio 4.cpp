#include <stdio.h>
int tam (char *palabra){
	int b=0;
	while(*palabra != '\0'){
		*palabra++;
		b++;
	}
	return b;
}
	void desordenado (int l, char *palabra){
		char cadena[100],aux;
		int i=0,f,g;
		cadena[l]='\0';
		while(*palabra != '\0'){
			cadena[i]=*palabra;
			*palabra++;
			i++;
		}
		for (g=0;g<l;g++){
			for (f=0;f<l-g;f++){
				if (cadena[f]<cadena[f+1]){
					aux=cadena[f];
					cadena[f]=cadena[f+1];
					cadena[f+1]=aux;
				}
			}
		}
		printf("\nLa cadena es: \"%s\"",cadena);
	}
		int main(int argc, char *argv[]) {
			char cadena1[100];
			int l;
			printf("\nIngrese una cadena: ");
			gets(cadena1);
			l = tam(cadena1);
			desordenado(l,cadena1);
			return 0;
		}
