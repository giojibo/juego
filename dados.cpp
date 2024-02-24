#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzaDados()
{
    return rand() % 6 + 1;
}

int main()
{
    int primerDado, segundoDado, suma;
    srand(time(0));
    cout<<"Bienvenido al juego de dados \n"<<endl;


    primerDado = lanzaDados();
    segundoDado = lanzaDados();
    suma = primerDado + segundoDado;

    cout<<"Lanzaste un: "<<primerDado<<" y un "<<segundoDado<<endl;
    cout<<"La suma es: "<<suma<<endl;

    if(suma == 7 || suma == 11)
    {
        cout<<"Has ganado"<<endl;
    }
    else
    {
        if(suma == 2 || suma == 3 || suma == 12)
        {
            cout<<"Has perdido"<<endl;
        }
        else
        {
            cout<<"Continua hasta lograr obtener "<<suma<<" de nuevo"<<endl;
        }
    }

    int punto = suma;

    do
    {
        cout<<"lanza los dados nuevamente\n"<<endl;
        primerDado = lanzaDados();
        segundoDado = lanzaDados();
        suma = primerDado + segundoDado;

        cout<<"Lanzaste un: "<<primerDado<<" y un "<<segundoDado<<endl;
        cout<<"La suma es: "<<suma<<endl;

        if(suma == punto)
        {
            cout<<"Felicidades, ganaste"<<endl;
            break;
        }
        else
        {
            if(suma == 7)
            {
                cout<<"Lo siento, perdiste"<<endl;
                break;
            }
        }

    }while(true);

    return 0;
}
