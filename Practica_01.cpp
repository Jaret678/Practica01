#include<stdlib.h>
#include<stdio.h>
int main(){
	float a,b,c;
	int opc,opt;
	do{
		system("cls");
		printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division");
    	printf("\nIngrese una opcion: ");
    	scanf("%d",&opc);
    	while(opc>4){
		system("cls");
		printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division");
		printf("\nOpcion incorrecta");
		printf("\nIngrese una opcion: ");
	    scanf("%d",&opc);
	}
	printf("Ingrese el primer valor: ");
	scanf("%f",&a);
	printf("\nIngrese el segundo valor: ");
	scanf("%f",&b);
	if(opc==1){
		c=a+b;
		}
	else if(opc==2){
		c=a-b;
		}
	else if(opc==3){
		c=a*b;
	}
	else if(opc==4){
		while(b==0){
			
			printf("Valor invalido no hay division entre 0");
			printf("\nIngrese el segundo valor: ");
        	scanf("%f",&b);
		}
		c=a/b;
	}
	printf("El resultado es: %f",c);
	printf("\n5.Seguir\n6.Salir\nIngrese una opcion: ");
	scanf("%d",&opt);
	while(opt<5 or opt>6){
		system("cls");
		printf("Opcion incorrecta");
		printf("\n5.Seguir\n6.Salir\nIngrese una opcion: ");
		scanf("%d",&opt);
	}
	}while(opt==5);
}
