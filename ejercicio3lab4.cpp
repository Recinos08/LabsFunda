#include "iostream"

using namespace std;

int main (){
    int n1;
    cout<< "Introduzca el numero para demostrar si es positivo, negativo o igual que 0"<<endl;
    cout<<endl;
    cin >> n1;

    if(n1>0){
        cout<<endl;
        cout<< "Este numero es positivo" <<endl;
    }

    else if(n1<0){
        cout<<endl;
        cout<< "Este numero es negativo" <<endl;
    }

    else{
        cout<<endl;
        cout << "Este numero es 0" <<endl;

    }
    return 0;

}