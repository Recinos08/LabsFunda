#include "iostream"
#include "stdlib.h"

using namespace std;

int main(){
    int numAlumnos;
    int numNotas;
    int estatura[25], suma= 0,n;
    float promedio;
    cout << endl;
    cout << "Calcularemos el promedio de las estaturas " <<endl;
    cout << endl;
    cout << "Ingresa las 25 estaturas"<< endl;
    for (int h= 0; h<25; h++){
        do{
            cout <<endl;
            cout << "Introduzca la estatura"<< h+1<< ":" << endl;
            cin >> estatura[h];
        }while(estatura[h]<0 || estatura[h]>300);
        suma = suma+estatura[h];
        promedio = (suma)/25;
    }
    cout << "El promedio es: " << promedio <<endl;


    cout <<"¿Cuanto estudiantes se mediran? ";
    cin>> numAlumnos;
    int arr[numAlumnos];
    cout << "ingrese la cantidad de estaturas por estudiante: " << endl;

    cin>> numNotas;
    int arr2[numNotas];
    cout <<endl;
    int k= 0;

    for(int i= 0; i< numAlumnos; i++)
    {
        cout << "La estatura del alumno es "<<i+1<< endl;
        cout << endl;
        for(int j= 0; j<numNotas; j++)
        {
            cout << "Estatura"<< j+1<< endl;
            cout << endl;
            cin>> arr2[j];
            arr[j+k]=arr2[j];

            if(arr2[j]>promedio)
            {
                cout <<endl;
                cout << "Esta arriba de la media" <<endl;
                cout << endl;
            }
            else if(arr2[j]== promedio){
                cout << endl;
                cout << "Es igual a la media" <<endl;
                cout << endl;
            }
            else{
                cout << endl;
                cout << "Esta abajo de la media" << endl;
                cout << endl;
            }

        }

    }
    return 0;
}
