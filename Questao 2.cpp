/*Escreva um programa que solicite ao usuário que digite uma string 
e, em seguida, crie uma nova string que seja a cópia da string original, mas 
com todas as vogais removidas. O programa deve usar ponteiros para manipular as strings.*/

#include <stdio.h>
#include <locale.h>

void cem_vogais(char *original, char *sem_vogais) {

    while (*original != '\0') { 
    
        if (*original != 'a' && *original != 'e' && *original != 'i' && *original != 'o' && *original != 'u'
            && *original != 'A' && *original != 'E' && *original != 'I' && *original != 'O' && *original != 'U') {
         
            *sem_vogais = *original;
            sem_vogais++;
        }
        original++;
    }

    *sem_vogais = '\0';
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int i;
    char original[100]; char sem_vogais[100];
    
    printf("Digite uma string: ");
    fgets(original, 100, stdin);

   
    char *p_original = original;
    char *p_copia = p_original;

    char *p_sem_vogais = sem_vogais;
    cem_vogais(p_copia, p_sem_vogais);

    printf("\nString original: %s", original);
    printf("String sem vogais: %s\n", sem_vogais);

    return 0;

}


