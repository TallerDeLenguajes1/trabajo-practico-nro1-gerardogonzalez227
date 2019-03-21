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
/*
Nota: Si resolvió correctamente los puntos 2 y 3 notará que el resultado es el mismo. ¿a qué se debe?
¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?

 En los puntos mencionados el resultado es el mismo,
 pues el puntero guarda la direccion de memoria de la variable a la cual apunta, En mi caso
 a la variable a. 
 En el punto 4 los resultados son diferentes, la variable a tiene una diferente direccion
 de memoria que el puntero p
*/