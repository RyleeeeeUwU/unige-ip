#include <iostream>
#include <vector>

using namespace std;

double mean(double sum, const vector<int> &v)
{
    return sum / v.size();
}

void print(double avg)
{
    cout << "La media dei valori inseriti é : " << avg;
}

void fill_vector(vector<int> &v, int val)
{
    while (val >= 0) {
        v.push_back(val);
        cout << "Dammi un valore positivo, stoppa con un negativo: ";
        cin >> val;
    }
    
    double sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    print(mean(sum, v));
}

int main()
{
    int val = 0;
    vector<int> v;

    fill_vector(v, val);
}