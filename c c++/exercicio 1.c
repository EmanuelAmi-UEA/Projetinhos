#include <stdio.h>
#include <limits.h>

// Função para aceitar apenas números ímpares e positivos
void preencherVetor(int vetor[], int tamanho) {
    int i = 0, num;

    while (i < tamanho) {
        printf("Digite um número ímpar e positivo para o vetor: ");
        scanf("%d", &num);

        if (num > 0 && num % 2 != 0) {  // Verifica se é ímpar e positivo
            vetor[i] = num;
            i++;
        } else {
            printf("Número inválido! Digite um número ímpar e positivo.\n");
        }
    }
}

// Função para calcular a soma do maior e menor número do vetor
int somaMaiorMenor(int vetor[], int tamanho) {
    int maior = INT_MIN, menor = INT_MAX;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return maior + menor;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    preencherVetor(vetor, tamanho);

    int resultado = somaMaiorMenor(vetor, tamanho);

    printf("A soma do maior e menor elemento do vetor é: %d\n", resultado);

    return 0;
}
