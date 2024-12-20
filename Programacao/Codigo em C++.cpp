#include <iostream>
#include <stdexcept>  // Para capturar exceções de alocação
using namespace std;

int main() {
    int *arr;  // Ponteiro para o array
    int n;

    // Solicita o número de elementos ao usuário
    cout << "Digite o número de elementos: ";
    cin >> n;

    try {
        // Aloca o array dinamicamente com o tamanho fornecido
        arr = new int[n];  // Se falhar, lança uma std::bad_alloc

        // Preenche o array com valores fornecidos pelo usuário
        cout << "Digite " << n << " números inteiros:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Exibe os valores armazenados no array
        cout << "Os números digitados foram:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Libera a memória alocada para o array
        delete[] arr;

    } catch (const bad_alloc& e) {
        // Se a alocação falhar, o programa entra aqui
        cout << "Erro ao alocar memória: " << e.what() << endl;
        return 1;
    }

    return 0;
}

