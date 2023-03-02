/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. Utilizando ponteiros, 
troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar 
operadores de atribuição direta. Em seguida, imprima os valores atualizados das duas variáveis.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int a, b, *pa, *pb;
    
    printf("Dê um valor para a: ");
    scanf("%d", &a);
    
    printf("Dê um valor para b: ");
    scanf("%d", &b);
    
    pa = &a;
    pb = &b;
    
    *pa = *pa + *pb; //primeiro soma os valores de a e b e os atribuí o resultado à a.
    *pb = *pa - *pb; //depois subtraí o valor de b sobre o de a e atribuí o resultado à b.
    *pa = *pa - *pb; //e no fim subtraí o valor de b sobre o de a de novo e atribuí o resultado à a.
    
    printf("\nNovo valor de a: %d\n", a);
    printf("Novo valor de b: %d\n", b);
    
    return 0;
}

