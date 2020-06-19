#include <iostream>
#include <cmath>
bool funbisiesto(int b);
bool funpar(int d);
int funmostrar(int h,int m,int s);
using namespace std;
int main()
{
    int d, m, a;
    bool b, v;
    cout<<"PROGRAMA QUE AGREGAR UN DIA A LA FECHA INGRESADA" <<endl <<endl;
    cout<<"Por favor ingrese la fecha (dd/mm/aa):" <<endl;
    cout<<"Ingrese el a\244o (sus ultimos dos digitos):" <<endl;
    cin>>a;
    while(a<0 || a>100)
    {
    cout<<"Error, ingrese correctamente el a\244o (sus ultimos dos digitos):" <<endl;
    cin>>a;
    }
    cout<<"Ingrese el mes (mm):" <<endl;
    cin>>m;
    while(m<1 || m>13)
    {
    cout<<"Error, ingrese correctamente el mes (mm):" <<endl;
    cin>>m;
    }
    v=funpar(m);
    b= funbisiesto(a);
    if(b==false)
    {
        if(m<8)
        {
            if(m==2){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>28)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=29){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
            }else{
            if(v==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=31){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
            if(v!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=32){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
                }
        }
        if(m>8){
            if(v==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=32){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
            if(v!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=31){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
        }
    }
        if(b==true)
    {
        if(m<8)
        {
            if(m==2){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>29)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=30){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
            }else{
            if(v==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=31){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        +1;
        if(a>=100)
        {a=0;}
        }}
                }
            if(v!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=32){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
                }
        }
        if(m>8){
            if(v==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=32){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
            if(v!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>d;
                while(d<1 || d>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>d;}
        d=d+1;
        if(d>=31){
        d=1;
        m=m+1;
        if(m>=13)
        {
        m=1;
        a=a+1;
        if(a>=100)
        {a=0;}
        }}
                }
        }
    }
    cout<<"La fecha mas un dia es: ";
    funmostrar(d, m, a);
}
int funmostrar(int h,int m,int s)
{
    if(h<10) {cout <<0;}
    cout<<h;
    cout<<"/" ;
    if(m<10) {cout <<0;}
    cout<<m; 
    cout<<"/";
    if(s<10) {cout <<0;}
    cout<<s;
}
bool funbisiesto(int b)
{
    int a, i, o;
    a=b%400;
    o=b%4;
    i=b%100;
   if(a==0)
   {
      return true;
   }
   if(i!=0)
       {
        switch (o)
        {
        case 0:
        return true;
        break;
        
        default:
        return false;
            break;
        }
       }
    return (1);
}
bool funpar(int d)
{
    int a;
    a=d%2;
    if(a=0){
        return true;
    }else{
        return false;
    }
    return (1);
}