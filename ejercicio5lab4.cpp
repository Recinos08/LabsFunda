#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main (){
    string palabra;
    string l1;
    string lf;
    int largo;
    cout<<endl;
    cout<< "Este programa servira para identificar si una palabra empieza y tenermina con la misma letra" <<endl;
    cout<<endl;
    cout<<endl;
    cout<< "Ingrese la palabra"<<endl;
    cout<<endl;
    cin>>palabra;
    l1 = palabra.substr (0, 1);
    largo = palabra.size();
    lf = palabra.substr (largo -1, 1);
    if (l1 == lf){
        cout<<endl;
        cout<< "La palabra que ingreso termina con la misma letra con la que empezo"<<endl;
        
    }
    else {
        cout<<endl;
        cout << "La palabra que ingreso no termina con la misma letra con la que empezo"<<endl;
    }


}