/*01. Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango(1-100), e indicaral usuario si el númeroque digito es menor o mayor
al numero aleatorio, asi hasta que lo adivine, y por ultimo mostrarle el número
de intentos que le llevo*/;

//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);

#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int numero, dato, contador = 0;
    
    srand(time(NULL)); //generar numero aleatorio;
    dato = 1 + rand() % (100);

    do{
        cout<<"Digite un numero: ";
        cin>>numero;

        if(numero > dato){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero < dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++;
    }while(numero != dato);
    

    cout<<"\nFelicidades encontraste el numero\n";
    cout<<"Numero de intentos: "<<contador<<endl;
    return 0;
}