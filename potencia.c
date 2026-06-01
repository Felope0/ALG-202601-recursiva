#include <stdio.h>

long long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("=== Calculadora de Potencia ===\n");
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: expoente deve ser inteiro positivo!\n");
    } else {
        printf("%d^%d = %lld\n", base, expoente, potencia(base, expoente));
    }
    system("pause");

    return 0;
}
