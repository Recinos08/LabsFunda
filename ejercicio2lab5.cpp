#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"


int main()
{
    int hrs, mnts, sgnds;

    printf( "\n   Introduzca las horas: " );
    scanf( "%d", & hrs );
    printf( "\n   Introduzca los minutos: " );
    scanf( "%d", &mnts );
    printf( "\n   Introduzca los segundos: " );
    scanf( "%d", &sgnds );

    if ( hrs >= 0 && hrs <= 23 && mnts >= 0 && mnts <= 59 && sgnds >= 0 && sgnds <= 59 )
    {
        sgnds++;
        if ( sgnds == 60 )
        {
            sgnds = 0;
            mnts++;
            if ( mnts == 60 )
            {
                mnts = 0;
                hrs++;
                if ( hrs == 24 )
                    hrs = 0;
            }
        }
        printf( "\n   Un segundo despu%cs la hora es: %d:%d:%d", 130, hrs, mnts, sgnds );
    }
    else
        printf( "\n   ERROR: La hora es incorrecta." );

    getch(); 

    return 0;
}