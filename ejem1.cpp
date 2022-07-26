#include<iostream>
using namespace std;

int main(){
    int n, c=0, k=0;

    cout<<"Ingrese el numero: ";
    cin>>n;

    if(n>0){

        for(int i=1; i<=n; i++){
            
            if (n % i == 0){
               /*no es primo*/ 
               cout<<"Es divisible "<<i<<endl;
               c = c + i;
            }
            else{
                /*es primo*/
                cout<<"No es divisible "<<i<<endl;
                k = k + i;
            }
        }
        
        
    }
    else{
        cout<<"Es negativo"<<endl;
    }
    

    return 0;
}