#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numero;
    int i;

    printf("=== Sequencia de Fibonacci ===\n");
    printf("Digite quantos termos deseja exibir: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: digite um numero maior que zero!\n");
    } else {
        printf("Sequencia: ");
        for (i = 0; i < numero; i++) {
            printf("%lld", fibonacci(i));
            if (i < numero - 1) printf(", ");
        }
        printf("\n");
    }
    system("pause");

    return 0;
}
