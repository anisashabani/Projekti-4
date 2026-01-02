#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;
const int NR_LENDEVE = 6;

// Lendet e semestrit 1
string emriLendes[NR_LENDEVE] = {
    "Algjeber Lineare & Kalkulus 1",
    "Fizike per Inxhinieri 1",
    "Bazat e Inxhinierise Elektrike 1",
    "Bazat e Programimit",
    "Lenda Zgjedhore",
    "Shkathtesi Komunikuese"
};

struct Student {
    string ID;
    string Emri;
    string Mbiemri;
    int Nota[NR_LENDEVE];

    void lexo();
    double mesatare() const;
    void shtyp() const;
};

void Student::lexo() {
    cout << "ID: ";
    cin >> ID;
    cout << "Emri: ";
    cin >> Emri;
    cout << "Mbiemri: ";
    cin >> Mbiemri;

    cout << "\nShkruaj notat (0-10). Notat < 5 NUK llogariten ne mesatare.\n";
    for (int i = 0; i < NR_LENDEVE; i++) {
        cout << "Nota - " << emriLendes[i] << ": ";
        cin >> Nota[i];
    }
}

void Student::shtyp() const {
    cout << "\n--- STUDENT ---\n";
    cout << "ID: " << ID << endl;
    cout << "Emri: " << Emri << endl;
    cout << "Mbiemri: " << Mbiemri << endl;

    cout << "Notat:\n";
    for (int i = 0; i < NR_LENDEVE; i++) {
        cout << "  - " << emriLendes[i] << ": " << Nota[i] << endl;
    }

    cout << "Mesatarja (pa notat < 5): " << mesatare() << endl;
}
if (n == 0) {
    cout << "\nNuk u shtua asnje student.\n";
    return 0;
}

int main()
{
    return 0;
}