/*
    In questo file vediamo come svolegere delle semplici operazioni con le variabili.
    ATTENZIONE: TUTTI i seguenti operatori si possono usare solo tra variabili dello stesso tipo!!

    OPERATORI ARITMETICI:
    Gli operatori aritmetici, posti tra due variabili numeriche, si usano nei calcoli matematici e sono i seguenti:
        +   somma
        -   sottrazione
        *   moltiplicazione
        /   divisione
        %   modulo

    L'operatore modulo restituisce il resto di una divisione tra interi: per esempio, 11 % 4 darà come risultato 3, dato che
    11 diviso 4 fa 2 e resto 3.

    È importante tenere presente che il risultato delle operazioni può dipendere dal tipo di dato assegnato alle variabili.
    La divisione tra interi, per esempio, non restituisce decimali. Così, se a e b valgono 17 e 4, il rapporto a/b varrà 4.25 se le
    due variabili sono state definite come float, mentre varrà 4 se sono state definite come int.

    L'operatore % restituisce il resto della divisione tra interi, perciò si può calcolare a%b soltanto quando entrambe le
    variabili sono state definite come int (se così non è, si avrà un errore in fase di compilazione).

    Si usano infine le parentesi tonde per stabilire la priorità delle operazioni.
    Per esempio, per trovare il valore medio tra quelli delle variabili a e b si dovrà scrivere (a+b) /2, che ha un valore
    diverso da a+b/2.
    Quando occorre, si usano parentesi nidificate; per esempio, l'inverso del valore medio appena citato si può scrivere nella
    forma 1/ ( (a+b) /2).
*/
#include <iostream>

using namespace std;

int main(){

    /* Esempi di operazioni aritmetiche */
    int a = 3, b = 4, c = 5, d = 0;
    double e = 44.09, f = 11.2, g = 0.0;

    d = a + b;
    cout << "a + b = " << d << endl;
    cout << "a - b = " << a - b << endl;
    cout << "c * a = " << c * a << endl;
    cout << "c / a = " << c / a << endl;
    cout << "d \% a = " << d % a << endl << endl;

    g = e * f;
    cout << "e * f = " << d << endl;
    cout << "e - f = " << e - f << endl;
    cout << "g + f = " << g + f << endl;
    cout << "g / f = " << g / f << endl << endl;

    /*
    OPERATORI DI ASSEGNAZIONE COMPOSTI:

    L'operatore di assegnazione si può combinare con quelli aritmetici, producendo «scorciatoie» che permettono di rendere
    più conciso il codice.

    Per esempio, += assegna alla variabile a sinistra dell'operatore la somma del proprio valore e di quello della variabile a
    destra: scrivere var1+=var2; equivale a scrivere varl=var1+var2;

    In modo analogo funzionano gli operatori -=, *=, /=, e %=.

    Così, per esempio, se la variabile a ha il valore 5, dopo l'istruzione a *= 2; il suo valore diventerà 10.
    */

    a += b;
    a -= b;
    a *= b;
    a /= b;
    a %= b;

    /*
    OPERATORI DI INCREMENTO E DECREMENTO:

        Gli operatori di incremento e decremento aumentano o diminuiscono di un'unità il valore di una variabile intera:
        ++      aumenta di 1:
                                scrivere i++ equivale a scrivere i = i + 1
        --     diminuisce di 1:
                                scrivere i-- equivale a scrivere i = i - 1
    */

   /*
    Gli operatori relazionali si usano per confrontare tra loro i valori di due variabili, ottenendo come risultato
    vero oppure falso:

    ==          uguale a
    !=          diverso da
    >           maggiore di
    >=          maggiore o uguale a
    <           minore di
    <=          minore o uguale a
   */

    return 0;
}
