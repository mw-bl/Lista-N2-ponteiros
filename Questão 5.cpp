/*Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. Em seguida, 
preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular 
o dobro desse valor. Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>

int main() {
    float valor, *ponteiro;
    
    printf("Digite um valor real: ");
    scanf("%f", &valor);
    
    ponteiro = &valor;
    
    printf("\nValor original: %.2f\n", *ponteiro);
    printf("Dobro do valor digitado: %.2f\n", *ponteiro * 2);
    
    return 0;
}

