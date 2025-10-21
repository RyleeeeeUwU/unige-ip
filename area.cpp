#include <iostream>

using namespace std;

const double pi = 3.141592653589;

double area_rect(double b, double h)
{
    return b * h;
}

double area_tri(double b, double h)
{
    return b * h / 2;
}

double area_circle(double r)
{
    return r * r * pi;
}

int main()
{
    double b = 0, h = 0,  r = 0;
    int scelta = 0;

    cout << "Calcolo dell'area di una figura piana\nScegli che area calcolare\n1) Rettangolo\n2) Triangolo\n3) Cerchio\n";
    cin >> scelta;

    switch (scelta){
        case 1:
            cout << "Base: ";
            cin >> b;
            cout << "Altezza: ";
            cin >> h;
            cout << "L'area del rettangolo dato é " << area_rect(b, h) << endl;
            break;

        case 2:
            cout << "Base: ";
            cin >> b;
            cout << "Altezza: ";
            cin >> h;
            cout << "L'area del triangolo dato é " << area_tri(b, h) << endl;
            break;
            
        case 3:
            cout << "Raggio: ";
            cin >> r;
            cout << "L'area del cerchio dato é " << area_circle(r) << endl;
            break;
    }

    return 0;
}