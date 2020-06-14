#include <conio.h>
#include <iostream>
using namespace std;
int main(){
float h; // horas extras
float s; // sueldo total
float sr; // sueldo real
float ht; // horas trabajadas
float desc = 0;
int i=0, n = 0;
string nombre;

cout<<"Cantidad de empleados a evaluar"<<endl;
cin>>n;
for (i = 0; i <n; i++) 
{
getch();
cout<<"Ingrese nombre de empleado"<<endl;
cin>>nombre;
cout<<"Ingrese sus horas ejercidas"<<endl;
cin>>ht;
cout<<"Ingrese sus horas extras laboradas"<<endl;
cin>>h;


s = (ht*1.75) + (h*2.50);
if (s > 500)
{
    desc = s*(0.04+0.0625+0.1);
    sr = (s - desc);
}

else if (s < 500);
{
    float descmenor = s*(0.04+0.0625);

    sr = s - descmenor;
}

cout<<"Los datos del empleado son: "<<endl;
cout<<"Nombre: "<< nombre<<endl;
cout<<"El salario total es: "<< s <<endl;
cout<<"El salario real es: " << sr<<endl;
return 0;
}
}