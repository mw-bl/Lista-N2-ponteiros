/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array.
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro.
Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int arr[5], *ptr;
    
    printf("Digite 5 valores inteiros: ");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        
    // esse for lê os 5 valores digitados e os armazena no array.
    }
    
    ptr = arr;
    
    printf("\nValores do array:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("\n%d ", *(ptr+i));
        printf("- Endereço na memória: %p", (ptr+i));
        
    // e esse for imprime os valores do array utilizando o ponteiro.
    // *ptr+i* acessa a posição de memória correspondente ao índice i do array.
    }
    
    return 0;
}

