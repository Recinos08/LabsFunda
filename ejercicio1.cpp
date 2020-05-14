#include "iostream"

using namespace std;

int main(){
    float m, n1, n2, n3, p;
    string n;

    cout << "Introduzca su carnet" << endl;
    getline(cin, n); 
    cout << "Introduzca su primera nota" << endl;
    cin >> n1;
    cout << "\n" << endl;
    cout << "Introduzca su segunda nota" << endl;
    cin >> n2;
    cout << "\n" << endl;
    cout << "Introduza su tercera nota" << endl;
    cin >> n3;
    p = (n1 + n2 + n3) / 3;
    cout << "Estudiante:" << n << endl;
    cout << "Su promedio es:" << p << endl;
    return 0;
}