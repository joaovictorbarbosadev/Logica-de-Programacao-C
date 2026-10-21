#include <stdio.h>

int main() {
    int soma = 0;
    int numero;

    printf("Digite um numero (Digite 0 para encerrar): ");
    scanf("%d" , & numero);
        
		while (numero!= 0)
    {
            	soma = soma + numero;
                printf("Digite outro numero (Digite 0 para encerrar): ");
                scanf("%d" , & numero);
    }
    printf("\nSoma dos numeros digitados: %d\n",soma);
    return 0;
}