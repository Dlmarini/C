#include <stdio.h>
#include <stdlib.h>


typedef struct dato{
	int numero;
	struct dato* sig;
}Dato;


void insertar(Dato** , Dato**, int);
short listaVacia(Dato**);
void imprimirCola(Dato** );
void vaciarInicio(Dato**);
void vaciarCola(Dato**);
void checkMemoria(Dato*);

int main(int argc, char *argv[]) {
	Dato* inicioCola = NULL;
	Dato* finalCola = NULL; 
	

	return 0;
}


void insertar(Dato** inicioCola, Dato** finalCola, int numero){
	
	Dato* nuevo =(Dato*) malloc(sizeof(Dato));
	checkMemoria(nuevo);	
	nuevo->numero = numero;
	nuevo->sig = NULL;
	
	if(listaVacia(inicioCola)){
		*inicioCola = nuevo;
		*finalCola = nuevo;
	}else{
		(*finalCola)->sig = nuevo;
		*finalCola = nuevo;
	}
}

short listaVacia(Dato** inicioCola){
	short rt = 0;
	
	if(!(*inicioCola)){
		rt = 1;
	}
	return rt;
}

void imprimirCola(Dato** inicioCola){
	if(!(listaVacia(inicioCola))){
		
		Dato* aux = *inicioCola ;
		while(aux){
			printf("Elemento = %i\n",aux->numero);
			aux = aux->sig;
		}
	}else{
		printf("\nLa cola esta vacia!!!!");
	}
}

void vaciarInicio(Dato** inicioCola){
	if(!(listaVacia(inicioCola))){
		Dato* aux = *inicioCola;
		printf("Eliminando dato: %i",(*inicioCola)->numero);
		*inicioCola = aux->sig;
		free(aux);
	}else{
		printf("\nLa cola esta vacia!!!!");
	}
	
}
	
void vaciarCola(Dato** inicioCola){
	if(!(listaVacia(inicioCola))){
		Dato* auxIndice = *inicioCola;
		Dato* elementoAborrar;
		while(auxIndice){
			elementoAborrar = auxIndice;
			printf("Borrando elemento %i posicion en memoria %p\n",elementoAborrar->numero, *elementoAborrar);
			auxIndice = auxIndice->sig;
			free(elementoAborrar);
		}
		
		*inicioCola = NULL;
	}
	
	if(*inicioCola == NULL){
		printf("La cola esta vacia!!!!!\n");
	}
	
	
}
	
void checkMemoria(Dato* nuevo){
	if(!nuevo){
		printf("\nImposible reservar memoria!!!!, el programa se detendra");
		exit(-1);
	}
}
