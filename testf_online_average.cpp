#include <iostream>

using namespace std;

double onlineAverage()
{
    bool stop = false;
    double n, sum = 0, count = 0, avg = 0;
    char scelta;

    do {
        cout << "Inserisci un numero: ";
        cin >> n;

        sum += n;
        count++;

        cout << "Vuoi continuare? (y: si. n: no) ";
        cin >> scelta;
        if (scelta == 'n' || scelta == 'N') {
            stop = true;
        }
    }
    while (!stop);

    return sum / count;
}

int main()
{
    cout << onlineAverage();
}