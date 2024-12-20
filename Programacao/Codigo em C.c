#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;  // Ponteiro para o array
    int n, i;

    // Solicita o tamanho do array ao usu�rio
    printf("Digite o n�mero de elementos: ");
    scanf("%d", &n);

    // Aloca o array dinamicamente com o tamanho fornecido
    arr = (int*)malloc(n * sizeof(int));

    // Verifica se a aloca��o foi bem-sucedida
    if (arr == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        return 1;  // Encerra o programa em caso de erro
    }

    // Preenche o array com valores fornecidos pelo usu�rio
    printf("Digite %d n�meros inteiros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exibe os valores armazenados no array
    printf("Os n�meros digitados foram:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada para o array
    free(arr);

    return 0;
}

