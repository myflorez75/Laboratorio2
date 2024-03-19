#include <iostream>

using namespace std;


int prac() {

    int num = 47810;
    int billetes[10] = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    /*cout << "Escribe numero de billete: ";
    cin >> num;*/

    for (int i=0; i < 10; i++){

        int dato;

        dato =(num-num%billetes[i])/billetes[i];
        num = num%billetes[i];

        cout <<billetes[i]<<": " <<dato<< endl;

    }
    cout << "Faltante: "<< num << endl;


