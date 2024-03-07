#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	
	int idade=0;
	
	
	printf("Informe a idade: \n ");
	scanf("%d", & idade);
	printf("A idade informada é: \n %d", idade);
	
	if(idade<18){
		printf("\nMenor de idade.");
		
	} else{
		printf("\nMaior de idade");
		
	}
	
	
	return 0;
}
