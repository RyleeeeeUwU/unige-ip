#include <iostream>

using namespace std;

int getLength(int num)
{
    return to_string(num).length();
}

int main()
{
    int num;

    cout << "Inserisci un numero: ";
    cin >> num;
    cout << getLength(num);
}