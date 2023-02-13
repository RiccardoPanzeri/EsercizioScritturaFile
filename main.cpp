#include <stdio.h>
#include <string.h>
#include "prototipi.h"

using namespace std;

int main() {
	//dimensione dei vettori di tipo dipendente a
	int const dim = 3;
	//vettore di dipendenti
	dipendenteA aziendaA[dim];
	char csv1[100] = "";
	char csv2[100] = "";
	char csv3[100] = "";
	//input manuale dei dati di ogni dipendente
	setDati(aziendaA, dim);
	//visualizzo a schermo i dati di ogni dipendente;
	visualizzaDatiA(aziendaA, dim);
	//creo una stringa csv per ogni dipendente e la visualizzo
	csv(csv1, aziendaA[0]);
	printf("%s\n", csv1);
	csv(csv2, aziendaA[1]);
	printf("%s\n", csv2);
	csv(csv3, aziendaA[2]);
	printf("%s\n", csv3);
	//scrivo sul file ogni stringa csv;
	scriviCSV(csv1);
	scriviCSV(csv2);
	scriviCSV(csv3);
	
		



	return 0;
}