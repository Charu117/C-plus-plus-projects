#include <iostream>
#include "Strings.h"



int main() {
    Strings strings;
    int selection, condition;

    do {
        printf("\033c");
        printf("\n\nInserisci il numero corrispondente dell'operazione che vuoi effettuare\n1. Trasformazione delle stringhe\n2. Calcolare la lunghezza di una stringa\n"
               "3. Contare i caratteri\n4. Contare i vocali\n5. Invertire una parola\n6. Paragonare la lunghezza di due stringhe\n7. Decimale a Binario Convertor\n"
               "Per uscire inserire 0\n\nInserisci il numero della richesta: ");
        scanf("%d", &selection);
        strings.menu(selection);

        printf("\n\nPer continuare 1\nPer terminare 0 -> ");
        scanf("%d", &condition);

    } while (condition);

    return 0;
}
