#include "iostream"

using namespace std;

int main()
{

    int impN[100];
    
    cout<<"\n Estos numeros son los primeros 100 numeros impares:  ";
    for (int i = 100; i >= 0; i--) {

        if (i % 2 != 0)
        {
            impN[i] = i;

            cout<< "\n" << impN[i] << endl;
        }
    }
return 0;
}