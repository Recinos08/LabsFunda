#include "iostream"

using namespace std;

int main ()
{
    int n1,n2;
    cout<<endl;
    cout << "introduzca 2 numeros para verificar si son divisibles entre si"<<endl;
    cout <<endl;
    cout << "Introduzca el dividendo"<<endl;
    cout <<endl;
    cin >> n1;
    cout <<endl;
    cout << "Introduzca el divisor"<<endl;
    cout <<endl;
    cin >> n2;
    
    if(n1%n2== 0){
        cout<<endl;
        cout << n1 << " Si es divisible entre " << n2 <<endl;
    }
    else{
        cout<<endl;
        cout << n1 << " No es divisible entre " << n2 <<endl;
    }
    return 0;



    
}