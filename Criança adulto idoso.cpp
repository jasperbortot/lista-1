#include<stdio.h>
#include <locale.h>

// Criança, adulto ou idoso
// 0-17 menor, 18-59 adulto, >60 idoso

int main(){
	setlocale(LC_ALL, "Portuguese");

	
	int idade=0;
	
	
	printf("Informe a idade: \n ");
	scanf("%d", & idade);
	printf("A idade informada é: \n %d", idade);
	
	    if(idade>=0 && idade <18){
		printf("\nMenor de idade.");
		}
		
		
			if(idade>=18 && idade <60){
		printf("\nAdulto.");
		}
		
		if(idade>=60){
		printf("\nIdoso.");
		}
		
		if(idade<0){
			printf("\nERRO");
		}
		
	
	
	
	return 0;
}
