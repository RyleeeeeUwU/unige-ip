#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n < 0) {
        cout << "Il numero e' negativo";
        return false;
    }
    if (n == 2) {
        cout << "Il numero e' primo";
        return true;
    }
    if (n < 2 && n > 0) {
        cout << "Il numero non e' primo";
        return false;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n %i == 0) {
                cout << "Il numero non e' primo";
                return false;
            }
            else {
                cout << "Il numero e' primo";
                return true;
            }
        }
    }
}
int main()
{
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;
    cout << isPrime(n);
}