#include <stdio.h>

long long soma(int n) {
    if (n == 1) {
        return 1;
    }
   
    return n + soma(n - 1);
}

int main() {
    int numero;

    printf("=== Soma de 1 ate N ===\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: digite um numero maior que zero!\n");
    } else {
        printf("Soma de 1 ate %d = %lld\n", numero, soma(numero));
    }
    system("pause");

    return 0;
}
