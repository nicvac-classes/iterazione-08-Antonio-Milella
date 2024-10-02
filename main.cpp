#include <iostream>
#include <cmath>

using namespace std;


int main() {
    float media, promossi;
    int n,i;
    
    i = 0;
    promossi = 0;
    cout << "Inserisci il numero di studenti presenti nella classe" << endl;
    do {
        cin >> n;
        if (n <= 0) {
            cout << "Devi inserire un numero maggiore di 0" << endl;
        }
    } while (n <= 0);
    string nome[n];
    int voto[n];
    
    media = 0;
    for (i = 0; i <= n - 1; i++) {
        cout << "Nome?" << endl;
        cin >> nome[i];
        cout << "Qual è il tuo voto medio in informatica?" << endl;
        cin >> voto[i];
        media = media + voto[i];
        if (voto[i] >= 6) {
            cout << "Il ragazzo di nome: " << nome[i] << " è promosso con voto: " << voto[i] << endl;
            promossi = promossi + 1;
        } else {
            cout << "Il ragazzo di nome: " << nome[i] << " è stato bocciato con voto: " << voto[i] << endl;
        }
    }
    cout << "Sono stati promossi ben " << promossi << " alunni su " << n << ". Quindi sono stati bocciati ben " << n - promossi << " alunni." << endl;
    return 0;
}

