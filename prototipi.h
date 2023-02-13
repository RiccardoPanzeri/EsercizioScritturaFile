#include "struct.h"
//Funzione che permette di inserire manualmente i dati di ogni singolo dipendente del gruppoA;
void setDati(dipendenteA azienda[], int dim);
//Funzione che mi permette di visualizzare a schermo i dati di tutti i dipendenti del gruppoA;
void visualizzaDatiA(dipendenteA azienda[], int dim);
//Funzione che confeziona una stringa in formato csv con i dati di un dipendente del gruppoA;
void csv(char csv[], dipendenteA);
//Funzione che mi permette di scrivere su file le stringhe csv contenenti i dati dei dipendenti;
void scriviCSV(char csv[]);
