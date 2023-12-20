#include <iostream>
#include "funkcje.h"

using namespace std;

int main() {
    // Testowanie logarytmu naturalnego
    double x1 = 2.0;
    cout << "Logarytm naturalny z " << x1 << " wynosi: " << logarytmNaturalny(x1) << endl;

    // Testowanie odchylenia standardowego
    double array[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Odchylenie standardowe wynosi: " << odchylenieStandardowe(array, size) << endl;

    // Testowanie wartości Exponentu
    double x2 = 1.0;
    cout << "Wartosc Exponentu z " << x2 << " wynosi: " << wartoscExponentu(x2) << endl;

    double x3 = 2.0;
    cout << "Logarytm dziesietny z " << x3 << " wynosi: " << logarytmDziesietny(x3) << endl;
    return 0;
}





//obliczyć logarytm dziesiętny