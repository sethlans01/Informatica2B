/*
    Per poter usare le variabili occorre prima dire al computer che intendiamo crearne una:
    questa cosa si chiama dichiarazione della variabile.
    Con la diachiarazione delle varibaili andiamo a specificare il nome e il tipo di variabile che
    andremo a usare.

    Quando assegnamo alla variabile un valore iniziale, facciamo l'inizializzazione.
*/

/* Come fare la graffa: AltGr + Shift + [ oppure ]*/

/* { } */

#include <iostream>
#include <math.h> // Libreria per le funzioni matematiche complesse, come l'elevamento a potenza

using namespace std;

int main(){

    /* Dichiarazioni di variabili */
    /*
        Per dichiarare ed inizializzare una variabile si scrive:
            tipoVariabile nomeVariabile = valore_Di_Inizializzazione;

        Per dichiarare una variabile si scrive:
            tipoVariabile nomeVariabile;

        ATTENZIONE: le variabili si possono usare nelle righe successive a quella dove le si dichiarano.
    */
    bool a = false;
    double b = 3.45 * pow(10, 42);  // Per fare 10 alla 42esima si scrive pow(10, 42)
                                    // Quindi a^b si scrive come pow(a, b) dove a è la base e b è 
                                    // l'esponente. 

    char c = 'M';                   // Per immagazzinare dei simboli dentro un char si scrive il simbolo
                                    // dentro due apostrofi 'simbolo'.

    string d = "lavagna";           // Per immagazzinare una stringa si usa il tipo di dato string e si
                                    // inserisce la stringa dentro due apici "stringa".

    string l = "Buongiorno Galvani!"; // Le stringhe possono anche contenere delle frasi!

    char e = 15;
    int f = 256;

    bool g, h, i;                   // Dichiarazione di più variabili sulla stessa riga
                                    // ATTENZIONE: le variabili sono tutte dello stesso tipo, in questo 
                                    // caso sono bool.

    g = true;                       // Inizializzazione della variabile g.
    h = false;                      // Inizializzazione della variabile h.

    h = true;                       // Operazione di assegnazione: metto dentro la variabile h il valore
                                    // true. Con l'assegnazione metto dentro la variabile scritta a 
                                    // sinistra dell'uguale (=) il valore che è presente nella parte destra 
                                    // dell'uguale (=).
                                    // Con l'operazione di assegnazione cambio il valore contenuto dentro la 
                                    // variabile.
                                    // Quindi ora la variabile h contiene il valore true.

    i = h;                          // Operazione di assegnazione: metto dentro la variabile i il valore
                                    // contenuto dentro la variabile h.
                                    // Quindi ora la variabile i contiene il valore true.

    int j = 0, k = -34;             // Dichiarazione inizializzazione di più variabili sulla stessa riga
                                    // ATTENZIONE: le variabili sono tutte dello stesso tipo, in questo 
                                    // caso sono int.


    /* Dichiarazioni di costanti */
    const bool ALBERO = false;
    const double BUS2 = 3.45 * pow(10, 42); 
    const char CASA_GIALLA9 = 'M';                   
    const string DIARIO = "lavagna";           
    const string L = "Buongiorno Galvani!";

    // N.B. Le costanti hanno il nome in maiuscolo, le variabili in minuscolo
    // N.B.2 I nomi delle varibili e delle costanti non possono iniziare con i numeri

    /* Stampare a schermo le variabili */
    cout << "Hello World!" << endl << endl << "Ciao Galvani!!" << endl;

    cout << "Il valore della variabile a è: " << a << endl;

    cout << "Il valore della variabile a è: " << a << endl << "Il valore della variabile c è: " << c << endl;

    cout << b << d << endl << f << endl;

    /* Come salvare i dati dalla tastiera nelle variabili */
    cout << "Inserire il valore di b" << endl << endl;

    // Per prendere dei dati dalla tastiera e salvarli in una variabile, in questo caso b, si usa l'istruzione cin >>
    // N.B. ovviamente i dati che vengono letti dalla tastiera devono essere di un tipo compatibile con quello della variabile dove li voglio 
    // mettere. Ad esempio, se voglio salvare il valore true, la variabile deve essere booleana; se voglio salvare il numero 15.73, la variabile 
    // deve essere float o double....
    cin >> b; 

    // Dopo aver salvato i dati dalla tastiera alla variabile b, il valore della variabile b è cambiato!
    cout << "B vale: " << b << endl;

    return 0;

}

