#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char tecla;

    cout << "Presiona cualquier tecla..." << endl;

    while (true) {
        tecla = _getch();

        system("cls");

        cout << "Presiona cualquier tecla..." << endl << endl;
        cout << "> " << tecla << " (" << (int)tecla << ")";
    }

    return 0;
}