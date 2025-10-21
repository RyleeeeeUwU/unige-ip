#include <iostream>

using namespace std;

void stringer(string input)
{
    if (input.length() < 5)
    {
        cout << input.substr(input.length() - 1, 1);
    }
    else
    {
        //for (int i = 0; i < input.length(); i++)
        //{
        cout << input.substr(4, 1) << endl;
        //}
    }
}

int main()
{
    string input;

    cout << "Inserisci una parola: ";
    cin >> input;
    stringer(input);

    return 0;
}