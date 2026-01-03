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

// ----------- Kontroll PO / JO (pa cctype) -----------
bool eshtePo(string s) {
    return (s == "po" || s == "Po" || s == "PO" || s == "p" || s == "P");
}

bool eshteJo(string s) {
    return (s == "jo" || s == "Jo" || s == "JO" || s == "j" || s == "J");
}

double Student::mesatare() const {
    double s = 0;
    int count = 0;

    for (int i = 0; i < NR_LENDEVE; i++) {
        if (Nota[i] >= 5) {
            s += Nota[i];
            count++;
        }
    }

    if (count == 0) return 0;
    return s / count;
}

double mesatarjaPerLende(const Student S[], int n, int idxLende) {
    double s = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (S[i].Nota[idxLende] >= 5) {
            s += S[i].Nota[idxLende];
            count++;
        }
    }

    if (count == 0) return 0;
    return s / count;
}

int main()
{
Student S[MAX];
int n = 0;

// Shtimi i studenteve derisa te shkruhet "jo"
while (true) {
    string pergjigje;

    // pyet derisa te jete po/jo
    while (true) {
        cout << "\nA don me shtu student? (po/jo): ";
        cin >> pergjigje;

        if (eshtePo(pergjigje) || eshteJo(pergjigje))
            break;

        cout << "Input i pavlefshem! Shkruaj vetem po ose jo.\n";
    }

    if (eshteJo(pergjigje))
        break;

    if (n >= MAX) {
        cout << "U arrit limiti i studenteve.\n";
        break;
    }

    cout << "\nShto studentin #" << (n + 1) << endl;
    S[n].lexo();
    n++;
}


    return 0;
}