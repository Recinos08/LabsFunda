#include "iostream"
using namespace std;

int main(){
    float p, d, s;
    string np;
    string pn;
    string cb;
    cout << endl;
    cout << "Introduzca su nombre:" << endl;
    cout << endl;
    cin >> np;
    cout << endl;
    cout << "Introduzca el nombre del producto:" << endl;
    cout << endl;
    cin >> pn;
    cout << endl;
    cout << "Introduzca el numero de codigo de barra:" << endl;
    cout << endl;
    cin >> cb;
    cout << endl;
    cout << "Introduzca el precio del producto ($):" << endl;
    cout << endl;
    cin >> p;
    cout << endl;
    cout << "Introduzca la cantidad de producto comprado:" << endl;
    cout << endl;
    cin >> d;
    cout << endl;
    s= (p*d);
    cout << endl;
    cout << np << " el subtotal de dinero consumido es de: " << s << "$";
    return 0;
}