#include <iostream>

using namespace std;

void picos(int vetor[], int& n) {
    int p = 0; 
    for (int i = 1; i < n - 1; i++) {
        if (vetor[i] > vetor[i - 1] && vetor[i] > vetor[i + 1]) {
            vetor[p] = vetor[i];
            p++;
        }
    }

    n = p; 
}

int main() {
    int n;
    cin >> n; 
    int vetor[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    picos(vetor, n); 
    if (n == 0) {
        cout << "Sem pontos de pico" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }

    return 0;
}