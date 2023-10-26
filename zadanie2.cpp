#include <iostream>
using namespace std;

/*Napisz program, w którym użytkownik podaje 10 liczb
zapamiętywanych w tablicy statycznej AA. Program oblicza, ile z
tych liczb jest ujemnych i tworzy tablicę dynamiczną BB, w której
zapamiętuje te liczby (ujemne). Program wypisuje te liczby oraz
informację, ile ich było oraz ile liczb pominięto.*/

int main() {
    
    int AA[10];

    cout << "Wprowadz 10 liczb: ";
    for (int i = 0; i < 10; i++) {
        cin >> AA[i];
    }

    int u = 0; // ujemne

    for (int i = 0; i < 10; i++) {
        if (AA[i] < 0) { u++; }
    }
    cout << "Wprowadzono " << u << " liczb ujemnych." << endl;

    int* BB = new int[u];
    int j = 0;
    for (int i = 0; i < 10; i++) {
        if (AA[i] < 0) {
            BB[j] = AA[i];
            j++; }
        }

    cout << "\nWprowadzone liczby ujemne: ";
    for (int i = 0; i < u; i++) {
        cout << BB[i] << " ";
    }

    cout << "\n\nWprowadzono " << 10 - u << " liczb nieujemnych" << endl;


    return 0;
}