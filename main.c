#include <stdio.h>
#include <stdbool.h>

#define N 10
#define szukana 11

int main() {
    int tab_sort[N] = {1, 4, 5, 7, 8, 11, 15, 18, 21, 35};

    int poczatek = 0;
    int koniec = N - 1;
    int srodek;
    bool znalazlem = false;
    int licznik_krokow = 0;

    while (!znalazlem && poczatek <= koniec) {
        srodek = (poczatek + koniec) / 2;
        if(szukana == tab_sort[srodek]){
            znalazlem = true;
        } else{
            if (szukana < tab_sort[srodek]){
                koniec = srodek - 1;
            } else{
                poczatek = srodek + 1;
            }
        }
        licznik_krokow++;
    }

    if (znalazlem == true){
        printf("\nIndeks jest równy: %d\n", srodek);
    } else{
        printf("\nElement nie istnieje w tablicy.\n");
    }

    printf("\nLiczba kroków: %d\n", licznik_krokow);

    return 0;
}