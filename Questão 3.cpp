/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. Utilizando ponteiros, 
troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar 
operadores de atribui��o direta. Em seguida, imprima os valores atualizados das duas vari�veis.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int a, b, *pa, *pb;
    
    printf("D� um valor para a: ");
    scanf("%d", &a);
    
    printf("D� um valor para b: ");
    scanf("%d", &b);
    
    pa = &a;
    pb = &b;
    
    *pa = *pa + *pb; //primeiro soma os valores de a e b e os atribu� o resultado � a.
    *pb = *pa - *pb; //depois subtra� o valor de b sobre o de a e atribu� o resultado � b.
    *pa = *pa - *pb; //e no fim subtra� o valor de b sobre o de a de novo e atribu� o resultado � a.
    
    printf("\nNovo valor de a: %d\n", a);
    printf("Novo valor de b: %d\n", b);
    
    return 0;
}

