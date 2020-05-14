#include "iostream"
#include "conio.h"
#include "math.h"

using namespace std;
int main (){
    int a, b, c;
    float x1;
    float x2;
    cout << endl;
    cout << "Calcular la formula general." << endl;
    cout << endl;
    cout << "Introduzca el numero a" << endl;
    cout << endl;
    cin >> a;
    cout << endl;
    cout << "Introduzca el numero b" << endl;
    cout << endl;
    cin >> b;
    cout << endl;
    cout << "Introduzca el numero c" << endl;
    cout << endl;
    cin >> c;
    cout << endl;
    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
    cout << endl;
    cout << "x1= ";
    cout << x1 << endl;
    cout << endl;
    cout << "x2= ";
    cout << x2 << endl;
    cout << endl;
    return 0;
}