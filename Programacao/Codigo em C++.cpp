#include <iostream>
#include <stdexcept>  // Para capturar exce��es de aloca��o
using namespace std;

int main() {
    int *arr;  // Ponteiro para o array
    int n;

    // Solicita o n�mero de elementos ao usu�rio
    cout << "Digite o n�mero de elementos: ";
    cin >> n;

    try {
        // Aloca o array dinamicamente com o tamanho fornecido
        arr = new int[n];  // Se falhar, lan�a uma std::bad_alloc

        // Preenche o array com valores fornecidos pelo usu�rio
        cout << "Digite " << n << " n�meros inteiros:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Exibe os valores armazenados no array
        cout << "Os n�meros digitados foram:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Libera a mem�ria alocada para o array
        delete[] arr;

    } catch (const bad_alloc& e) {
        // Se a aloca��o falhar, o programa entra aqui
        cout << "Erro ao alocar mem�ria: " << e.what() << endl;
        return 1;
    }

    return 0;
}

