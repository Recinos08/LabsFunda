#include <iostream>
using namespace std;

float matriz [100][100];
float matriz2 [100];
double al;
double n = 5;
float s;
float p;
int contador=0;
int i;
int j;

int main (){
cout<<"\nIngrese el numero de alumnos: ";
cin>>al;

for (int i=0; i<al;i++){
    cout<<"\nIntroduzca la nota "<<i+1<<endl;
    for (int j=0; j<n;j++){
        cout<<" nota " << j+1<<": ";
        cin>>matriz [i][j];
        }
}
for (int i=0; i<al;i++){

    for (int j=0; j<n;j++){

        s = s + matriz[i][j];
    }
    s = s * 2;
    cout<<"\nNota final alumno"<<i+1<<" es" << ": "<<s<<endl;

    if (s >= 60 ){
        cout<<"Aprobado"<<endl;
    }
    else if (s < 60)
    {
        cout<<"reprobado"<<endl;
    }
    else if (s > 100)
    {
        cout<<"Ingrese notas validas"<<endl;
    }
    s = 0;
}
}