#include <stdio.h>
//	Prototipo de Funciones
int cuad (int );
void cuad2 (int *);
void direccion(int *);
void variable(int );
void invertir (int &a,int &b);
void ordenar(int &c,int &d);

// Funcion Principal
int main(){
	//	Inicializacion de variables
	int a,b,c,d;
	int num,n=0;
	// cant,n1,n2,cont;
	int *p;

	printf("Ingrese un numero: ");
	scanf("%d",&n);
	
	// punto (i)
	num = cuad(n);
	printf("El cuadrado de n=%d es: %d\n",n,num);

	// punto (ii)
	printf("Funcion void para calcular el cuadrado de un numero\n" );
	cuad2(&n);

	// punto (iii)	
	p=&n;
	direccion(p);
	// punto (iv)	
	
	printf("\nIngresar a :");
	scanf("%d",&a);

	printf("Ingresar b :");
	scanf("%d",&b);
	
	printf("\n\nValores originales a = %d y b = %d \n",a,b);
	invertir(a,b);
	printf("\nValores invertidos a = %d y b = %d \n",a,b);
	

	printf("\nIngresar c :");
	scanf("%d",&c);

	printf("Ingresar d :");
	scanf("%d",&d);

	ordenar(c,d);
	printf("\nEl numero %d es menor que %d \n",c,d);


/*
	printf("\nIngresar dos valores:\n 1(c):");
	scanf("%d",&c);
	printf(" 2(d):");
	scanf("%d",&d);
	if(c==d)
		printf("Los numeros son iguales y su valor es: %d\n",c);
	else{
		ordenar(c,d);
		printf("\nLos valores ordenados son:\n Numero 1(c)=%d\n Numero 2(d)=%d\n",c,d);
	}

	printf("\nCantidad de pares de numeros a ingresar: ");
	scanf("%d",&cant);
	for (cont=0;cont<cant;cont++){
		printf("\nIngresar par de numeros:\n 1: ");
		scanf("%d",&n1);
		printf(" 2: ");
		scanf("%d",&n2);
		if(n1==n2)
			printf("Los numeros son iguales y su valor es: %d\n",n1);
		else{
			ordenar(n1,n2);
			printf("\nLos valores ordenados son:\n Numero 1(c)=%d\n Numero 2(d)=%d\n",n1,n2);
		}
	}
	*/

	return 0;
}

int cuad (int n){
	n = n * n;
	return n;
}

void cuad2 (int *p){
	//*p = *p * *p;
	printf("El cuadrado de %d es %d\n",*p,*p**p );	
	return;
}

void direccion(int *p){
	printf("La direccion de memoria de la variable n es: %p y su valor es: %d",p,*p);//\n",&n,n);
}
void invertir (int &a,int &b){
	int aux;
	aux = a;
	a = b;
	b = aux;
	return;
}

void ordenar(int &c,int &d){
	int aux;
	if(d<c){
		invertir(c,d);
		/* 
		aux = c;
		c = d;
		d = aux;
		*/
	}
	return;
}