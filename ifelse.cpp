#include <stdio.h>

int main() {
    float nota = 0;
    
	printf("Digite uma nota:\n");
	scanf("%f", &nota);
    
    printf("Nota informada: %f.\n", nota);
 
    if (nota >= 
    5.50) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    return 0;
}