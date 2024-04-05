/*
    Per creare un programma in C++ occorre creare un file con estensione .cpp
    Al suo interno andremo a scrivere il codice dei vari programmi che realizzeremo...

    Definizioni:
        1. Chiamasi funzione un blocco di istruzioni che si può riutilizzare nel nostro programma più volte e in punti diversi.
        2. Chiamasi libreria un file diverso da quello del programma principale (che di solito ha estenzione .hpp) che contiene del
        codice scritto da qualcuno e che presenta delle funzioni che possono essere riutilizzate nel nostro programma.
        3. Il compilatore è un programma che usiamo per tradurre il codice C++ in sequenze di bit, che il computer può capire.

    Questo è un commento: i commenti sono di due tipi (su una sola riga o su più righe) e contengono del testo che viene
    ignorato dal compilatore. 
*/

// Questo è un commento su singola riga

/* Questo è
    un commento
    su più
    righe

    Vediamo ora il primo programma: stampare sullo schermo la frase "Hello World!"
*/

#include <iostream>
/*
    Questa è una direttiva al pre-processore: va a modificare le "impostazioni" del programma.
    In questo caso, segnala al compilatore di usare la libreria iostream.

    Per importare e usare nel nostro programma una libreria si usa la seguente sintassi:
    #include <nomeLibreria>
*/ 

using namespace std;
/*
    La riga 34 segnala al compilatore di usare il namespace standard.
    Siccome nelle librerie ci possono essere funzioni che svolgono compiti diversi, ma che hanno lo stesso nome, è stato creato
    il concetto di namespace, così è possibile indicare al compilatore quale funzione di quale libreria si sta usando nel nostro
    codice.

    Ad esempio, io creo due librerie (chiamate galvani e polimi) e ci metto la funzione studia, per poterla usare nel mio 
    programma dovrò scrivere rispettivamente galvani::studia e polimi::studia ogni volta che voglio usare la funzione.

    Poiché in certi casi si usano spesso le funzioni di una libreria (ad esempio quelle che appartengono alle librerie standard,
    che sono le librerie del C++), per evitare di scrivere ogni volta il namespace prima del nome della funzione, si usa
    il comando della riga 34.

    ATTENZIONE: in un programma si può scrivere solo una volta 
        using namespace nomeNamespace
*/

int main(){
    // Main è la funzione principale del nostro programma e al suo interno conterrà la maggior parte del codice da eseguire.

    cout << "Hello World!";
    /* La riga 55 contiene l'istruzione cout, che serve per stampare sullo schermo delle cose, nel nostro caso la stringa 
    "Hello World!".

    Per stampare una stringa si scrive cout << "Stringa";

    Se aggiungo << endl alla riga 55, dopo aver stampato "Hello World!" il testo andrà a capo di una riga.
    In questo caso il comando sarebbe
        cout << "Hello World" << endl;
    
    Se aggiungo << endl due volte il testo andrà a capo di due righe, e così via, per ogni volta che aggiungo un << endl.

    Quindi il comando cout << "Hello World!" << endl << endl << "Ciao Mondo!" << endl; stamperà a schermo:
    Hello World!

    Ciao Mondo!
    
    */

    return 0;
    /*
        L'istruzione alla riga 74 segnala che la funzione main termina.    
    */
}