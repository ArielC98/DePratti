#include <iostream>
using namespace std;

double arr2[10];
double arr[]={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

void numeros(double arr[]);
void mitad(double arr[]);

int main(){

   numeros(arr);
   mitad(arr);

    for (int j=0; j<10 ; j++){

        cout << arr[j] << endl;

    }

    for (int k = 0; k < 10; k++){

        cout << arr2[k] << endl;

    }
    return 0;
}

void numeros(double arr[]){

    int numero, i=0;

    while (!arr[9]) {

        numero = rand();
        if (numero >= 50 && numero <= 100) {
            arr[i] = numero;
            i++;
        }
    }

}

void mitad(double arr[]){

    for (int i = 10 ; i < 10 ; i++){

        arr2[i] = arr[i] * 0.5;

    }

}