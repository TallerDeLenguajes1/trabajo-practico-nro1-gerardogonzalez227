#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int a = 4;			// Declaro variable a
	int *p = &a;		// Declaro puntero p que apunta a la variable a

	printf("Variable  a= %d\n", a);

	// 1) Contenido del Puntero
	printf("Contenido del puntero: %d\n", *p);

	// 2) Direccion de memoria que Almacena el puntero
	printf("Direccion de memoria almacenada por el puntero: %p\n", p);
	
	// 3) La direccion de memoria de la variable
	printf("Direccion de memoria de la variable: %p\n", &a );
	
	// 4) Direccion de memoria del puntero
	printf("La direccion de de memoria del puntero: %p\n", &p);
	
	// 5) Tamaño de memoria utilizado por esa variable usando la función sizeof()
	printf("Tamano de memoria utilizado por la variable a: %d Bytes \n",sizeof(a));

	return 0;
}
