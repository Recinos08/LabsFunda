#include "iostream"

using namespace std;

int main (){
    int ab;
    cout<< "Ingrese un " "a" << char(164) << "o" " para saber si es bisiesto" << " o no"<<endl;
    cin>>ab;

    if (ab%400==0){
        cout<< "El " "a" << char(164) << "o" " si es bisiesto" << endl;
        cout<<endl;
    }
    else if (ab%4==0 && ab%100!= 0){
        cout<<endl;
        cout <<  "El " "a" << char(164) << "o" " si es bisiesto" << endl;
    }
    else{
        cout <<"El " "a" << char(164) << "o" " no es bisiesto" << endl;
    }
    return 0;

}
