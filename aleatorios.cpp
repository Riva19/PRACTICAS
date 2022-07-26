#include<iostream>
#include<time.h>

using namespace std;

int main(){
    int num, dat, cont;

    srand(time(0));
    dat = (rand() % 10 ) + 1;

    do{
        cout<<"Digite un numero: "; cin>>num;

        if(num<dat){
            cout<<"\nIngrese un numero mas alto\n";
        }
        if(num>dat){
            cout<<"\nIngrese un numero mas bajo\n";
        }
        cont++;
    }while(num != dat);

    cout<<"Felicidades Ingresaste el numero correcto"<<endl;
    cout<<"Numero de intentos: "<<cont<<endl;
    return 0;
}