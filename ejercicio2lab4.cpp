#include "iostream"

using namespace std;

int main(){
    int n1;
    cout<< "Introduzca un numero para saber si es par o no"<<endl;
    cout<<endl;
    cin>> n1;
    
    if (n1%2== 0){
        cout<<endl;
        cout<< n1 <<" este numero si es par" <<endl;
    }
    else {
        cout<<endl;
        cout << n1 << " este numero no es par" <<endl;
    }
    return 0;


}