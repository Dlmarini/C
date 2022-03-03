#include<stdio.h>

int miAtoi(char s[]){
    int rt = 0;
	int i = 0;
	
    while(s[i] != '\0'){
        rt = rt*10 + (s[i]-'0');  //suma ponderada en base a la tabla ASCII
        i++;
    }
    return rt;
}

int main(){

    char numeroAconvertir[10];
	
	printf("Ingrese un entero : ");
	
	scanf("%s", numeroAconvertir);
	

    printf("El numero es %d",miAtoi(numeroAconvertir));

return 0;
}
