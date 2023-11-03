#include <iostream>
#include <string>

using namespace std;

struct Produkt {
    string nazwa;
    double cena;

    // konstruktor 
    Produkt() : nazwa(""), cena(0.0) {}

    // konstruktor
    Produkt(const string& n, double c) : nazwa(n), cena(c) {}
};

// sortowanie produktów 
void sortujProdukty(Produkt produkty[], int ilosc) {
    for (int i = 0; i < ilosc - 1; i++) {
        for (int j = 0; j < ilosc - 1 - i; j++) {
            if (produkty[j].cena < produkty[j + 1].cena) {
                swap(produkty[j], produkty[j + 1]);
            }
        }
    }
}

int main() {
    Produkt produkty[10];

    // pobieranie od uzytkownika
    for (int i = 0; i < 10; i++) {
        string nazwa;
        double cena;

        cout << "Podaj nazwe produktu #" << i + 1 << ": ";
        cin >> nazwa;
        cout << "Podaj cene produktu #" << i + 1 << ": ";
        cin >> cena;

        // nowy produkt
        produkty[i] = Produkt(nazwa, cena);
    }

    sortujProdukty(produkty, 10);

    // wyświetlenie produktow
    cout << "Produkty od najdrozszych do najtanszych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << produkty[i].nazwa << " - " << produkty[i].cena << " zl" << endl;
    }

    return 0;
}
