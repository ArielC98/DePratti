#include <iostream>
using namespace std;

void numeros(double arreglo[]);
void mitad(double arreglo[], double arreglo2[]);

int main(){

double arr[10], arr2[10];
    numeros(arr);
    mitad(arr, arr2);

    for (int i = 0; i < 10 ; i++){

        cout << arr[i] << endl;

    }
    for (int i = 0; i < 10; i++) {

        cout << arr2[i] << endl;

    }

    return 0;
}

void numeros(double arreglo[]){

    int numero, i ;
    
    

    for (i = 0 ; i < 10 ; i++){
        
        numero = 50 + rand()%(101-50);
        arreglo[i] = numero;

    }


}

void mitad(double arreglo1[], double arreglo2[]){

    for(int i = 0 ; i < 10 ; i++){

        arreglo2[i] = arreglo1[i] / 2;

    }

}
