<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct info{
	int dato;
	struct info* sig;
}Info;

/*--------Prototipos---------------------------------*/
void apilar(int*,int, Info**);
void recorrerPila(Info**);
void desapilar(Info**);
void liberarMem(Info**);
void checkMem(Info*);
	
int main() {
	
	Info* tope = NULL;
	int indice= 0;
	
	
	/*Implementar menu*/
	
	
	return 0;
}


/*------Funciones--------------------------------------*/
void apilar(int* indice, int dato, Info** tope){
	
	Info* nuevo = (Info*)malloc(sizeof(Info));
	nuevo->dato = dato;
	
	nuevo->sig = *tope;
	*tope = nuevo;
	(*indice)++;
	
}
void desapilar(Info** tope){
	 Info* aux;
	
	if(*tope == NULL){
		printf("Pila vacia!!!\n");
	}else{
		aux = *tope;
		*tope = (*tope)->sig;
		printf("\nEliminando elemento: %i\n", aux->dato);
		free(aux);
		
	}
	
}
	
void recorrerPila(Info** tope){
	Info* actual = *tope; 
	
	if(actual){
		while(actual){
			printf("%i ",actual->dato);
			actual = actual->sig;
		}
	}
}
	
void liberarMem(Info** tope){
	
	Info* iterador = *tope;
	Info* borrar;
	
	while(iterador){
		borrar = iterador;
		iterador = iterador->sig;
		printf("Borrando elemento %d\n",borrar->dato);
		free(borrar);
	}
	
}

void checkMem(Info* nuevo){
	if(nuevo == NULL){
		printf("\nImposible reservar memoria!!!");
=======
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct info{
	int dato;
	struct info* sig;
}Info;

/*--------Prototipos---------------------------------*/
void apilar(int*,int, Info**);
void recorrerPila(Info**);
void desapilar(Info**);
void liberarMem(Info**);
void checkMem(Info*);
	
int main() {
	
	Info* tope = NULL;
	int indice= 0;
	for(short i = 0; i <= 20; ++i){
		apilar(&indice, i, &tope);
	}

	recorrerPila(&tope);
		
	printf("\n");
	getch();
	
	liberarMem(&tope);
	
	return 0;
}


/*------Funciones--------------------------------------*/
void apilar(int* indice, int dato, Info** tope){
	
	Info* nuevo = (Info*)malloc(sizeof(Info));
	nuevo->dato = dato;
	
	nuevo->sig = *tope;
	*tope = nuevo;
	(*indice)++;
	
}
void desapilar(Info** tope){
	 Info* aux;
	
	if(*tope == NULL){
		printf("Pila vacia!!!\n");
	}else{
		aux = *tope;
		*tope = (*tope)->sig;
		printf("\nEliminando elemento: %i\n", aux->dato);
		free(aux);
		
	}
	
}
	
void recorrerPila(Info** tope){
	Info* actual = *tope; 
	
	if(actual){
		while(actual){
			printf("%i ",actual->dato);
			actual = actual->sig;
		}
	}
}
	
void liberarMem(Info** tope){
	
	Info* iterador = *tope;
	Info* borrar;
	
	while(iterador){
		borrar = iterador;
		iterador = iterador->sig;
		printf("Borrando elemento %d\n",borrar->dato);
		free(borrar);
	}
	
}

void checkMem(Info* nuevo){
	if(nuevo == NULL){
		printf("\nImposible reservar memoria!!!");
>>>>>>> ff997baddfeda5fb93f5ee21808efcd8667ad4c1
		exit(-1);
	}
}
