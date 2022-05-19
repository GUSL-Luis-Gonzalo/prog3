/* Autor: Luis Gonzalo Guzman Sanchez, Realizado: 03/02/2022 
	Escuela: Universidad del Valle de Mexico Campus Villahermosa 
	Materia: Programacion Estructurada
	Ciclo: 01/2022
	
Este es un programa de la estructura basica de Lenguaje C de la materia de Programacion Estructurada
Muestra el uso de:
    -Variables flotantes
    -printf para mostrar varias variables
    -scanf
    -Comentarios para la documentacion interna del programa.
	*/
#include<stdio.h>
int main(){
	//Declaracion
	float F, C;
	//Entrada de datos
	printf("Introduce la temperatura en Centigrados: ");
	scanf("%f",&C);
	//Proceso
	F=(9/5.0*C)+32;
	//Salida
	printf("La temperatura en Fahrenheit es %f", F);	
	return 0;
}
