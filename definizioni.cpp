#include "prototipi.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


using namespace std;

void setDati(dipendenteA azienda[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("Inserisci il nome del %d° dipendente: ", i + 1);
		scanf("%s", azienda[i].nome);
		printf("Inserisci il cognome del %d° dipendente: ", i + 1);
		scanf("%s", azienda[i].cognome);
		printf("Inserisci lo stipendio del %d° dipendente: ", i + 1);
		scanf("%s", azienda[i].stipendio);
	}

}

void visualizzaDatiA(dipendenteA azienda[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("nome: %s\n", azienda[i].nome);
		printf("cognome: %s\n", azienda[i].cognome);
		printf("stipendio: %s\n", azienda[i].stipendio);
	}

}

void csv(char csv[], dipendenteA dipendente) {
	strcat(csv, dipendente.nome);
	strcat(csv, ", ");
	strcat(csv, dipendente.cognome);
	strcat(csv, ", ");
	strcat(csv, dipendente.stipendio );




}

void scriviCSV(char csv[]) {//la funzione permette di scegliere quale delle stringhe csv voglio scrivere sul file;
	FILE* fp;
	if (!(fp = fopen("lista.txt", "a"))){//effettuo un controllo su apertura in append;
		printf("Errore di apertura file!\n");//se il file non è associato correttamente allo stream, verrà visualizzato un messaggio di errore;
		exit(1);//uso exit 1 perchè indica la mancata esecuzione corretta del programma;
	}
	
		fprintf(fp, "%s\n", csv);//scrivo una stringa csv sul file;

	fclose(fp);

}




