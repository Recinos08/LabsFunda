#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
    int m, numero, cuenta= 4;

    srand(time(NULL));
    numero = 1 + rand()% (100);
    cout<< endl;
    cout<< endl;

    cout<< "Tienes que adivinar un numero entre el 1 al 100, tienes 5 intentos"<<endl;
    cout<< endl;
     
     do{
         cout<< "Digite un numero"<< endl;
         cin>> m;
         if (m<cuenta){
             cout<<endl;
             cout<< "Digite un numero menor"<<endl;
             cout<< endl;
             cout<< "Numero de intentos faltantes " << cuenta<<endl;
             cout<< endl;
         }
         else if(m<numero){
         cout<<endl;
         cout<< "Digite un numero mayor"<<endl;
         cout<<endl;
         cout << "Numero de intentos restantes " << cuenta<<endl;
        }
        cuenta --;
        if(cuenta == -1){
            cout<<endl;
            cout<< "Has superado el numero de intentos, vuelve a intentarlo"<<endl;
            cout<<endl;
            system ("pause");
        }

    }while (m!= numero);
    cout<<"Adivinaste el numero"<<endl;
    cout<<"Numero de intentos "<< cuenta<<endl;

    system ("pause");
    return 0;




}