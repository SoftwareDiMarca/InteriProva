/*
 * SommaInteri.cpp

 *
 *  Created on: 17 feb 2016
 *      Author: mmarcaccini
 */
#include <iostream>
using namespace std;

int main(){

	//programma puntatori a intero

	int intero1, intero2, intero4;
	cout <<"inserisci il primo intero\n";
	cin >> intero1;
	cout << "Inserisci il secondo intero\n";
	cin >>intero2;
	cout << "Inserisci il quarto intero\n";
	cin >> intero4;
	cout << "Somma di " << intero1 << " con " << intero2 << " e con " << intero4 << " = " << intero1+intero2+intero4 << endl;

	int temp;
	if (intero1 > intero2){
		temp = intero2;
		intero2 = intero1;
		intero1 = temp;
	}
	if (intero4 > intero1 && intero4 < intero2){
		temp = intero2;
		intero2 = intero4;
		intero4 = temp;
	}
	if (intero4 < intero1){
		temp = intero1;
		intero1 = intero4;
		intero4 = intero2;
		intero2 = temp;
	}
		cout << "Sequenza ordinata dei numeri immessi: " << intero1 << " - " << intero2 << " - " << intero4;
	return 0;
}



