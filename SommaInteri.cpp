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

	int intero1, intero2, intero3;
	cout <<"inserisci il primo intero\n";
	cin >> intero1;
	cout << "Inserisci il secondo intero\n";
	cin >>intero2;
	cout << "Inserisci il terzo intero\n";
	cin >> intero3;
	cout << "Somma di " << intero1 << " con " << intero2 << " e con " << intero3 << " = " << intero1+intero2+intero3 << endl;

	int temp;
	if (intero1 > intero2){
		temp = intero2;
		intero2 = intero1;
		intero1 = temp;
	}
	if (intero3 > intero1 && intero3 < intero2){
		temp = intero2;
		intero2 = intero3;
		intero3 = temp;
	}
	if (intero3 < intero1){
		temp = intero1;
		intero1 = intero3;
		intero3 = intero2;
		intero2 = temp;
	}
		cout << "Sequenza ordinata dei numeri immessi: " << intero1 << " - " << intero2 << " - " << intero3;
	return 0;
}



