#include "iostream"

using namespace std;

bool ano (int);

int main()
{
    int n;
    cout << "Ingrese el a\244o" << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    if(ano (n)){
        cout << n << " Es bisiesto" << endl;
    }
    else{
        cout << n << " No es bisiesto" << endl;
    }
    return 0;
}

bool ano (int n)
{
    if (n%4== 0){
        return true;
    }
    else if (n%4== 0 && n%100!= 0){
        return true;
    }
    else{
        return false;
    }
}