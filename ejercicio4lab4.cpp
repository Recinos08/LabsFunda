#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main (){
    char oracion [500];
    int largo;
    cout<<endl;
    cout<< "Este programa nos servira para saber si la oracion tiene mas, menos o 10 caracteres y si tienen una cantidad par o impar de letras"<<endl;
    cout<<endl;
    cout<< "Ingrese la oracion"<<endl;
    cout<<endl;
    cin. getline (oracion,500);
    largo = strlen (oracion);

    if (largo>10){
        cout<<endl;
        cout<< "La oracion tiene mas de 10 caracteres"<<endl;

    }
    else if (largo==10){
        cout<<endl;
        cout<< "La oracion tiene 10 caracteres"<<endl;

    }
    else if (largo<10){
        cout<<endl;
        cout<< "La oracion tiene menos de 10 caracteres"<<endl;

    }

    if (largo%2==0){
        cout<<endl;
        cout<< "Esta oracion es par"<<endl;
    }
    else{
        cout<<endl;
        cout<< "Esta oracion es impar"<<endl;
    }    
    return 0;





    

}