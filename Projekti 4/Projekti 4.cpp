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
double Student::mesatare() const {
    double s = 0;
    int count = 0;
}

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


int main() {
    int n;
    cout << "Shkruaj numrin e studenteve: ";
    cin >> n;

    if (n == 0) {
        cout << "\nNuk u shtua asnje student.\n";
        return 0;
    }

    if (n > MAX) {
        cout << "Numri maksimal i studenteve eshte " << MAX << ".\n";
        return 0;
    }

    Student S[MAX];

    // ==============================
    // Leximi i studenteve
    // ==============================
    for (int i = 0; i < n; i++) {
        cout << "\nStudenti " << i + 1 << ":\n";
        S[i].lexo();
    }

    // ==============================
    // Mesatarja e secilit student + max/min
    // ==============================
    int idxMax = 0, idxMin = 0;
    double maxAvg = S[0].mesatare();
    double minAvg = S[0].mesatare();

    cout << "\n==============================\n";
    cout << "MESATARJA E SECILIT STUDENT\n";
    cout << "==============================\n";

    for (int i = 0; i < n; i++) {
        double avg = S[i].mesatare();
        cout << (i + 1) << ") "
             << S[i].Emri << " " << S[i].Mbiemri
             << " | ID: " << S[i].ID
             << " | Mesatarja: " << avg << endl;

        if (avg > maxAvg) {
            maxAvg = avg;
            idxMax = i;
        }
        if (avg < minAvg) {
            minAvg = avg;
            idxMin = i;
        }
    }

    cout << "\nStudenti me mesataren ME TE MADHE: "
         << S[idxMax].Emri << " " << S[idxMax].Mbiemri
         << " (" << maxAvg << ")\n";

    cout << "Studenti me mesataren ME TE VOGEL: "
         << S[idxMin].Emri << " " << S[idxMin].Mbiemri
         << " (" << minAvg << ")\n";

    // ==============================
    // Mesatarja per secilen lende
    // ==============================
    cout << "\n==============================\n";
    cout << "MESATARJA PER SECILEN LENDE\n";
    cout << "==============================\n";

    for (int l = 0; l < NR_LENDEVE; l++) {
        cout << "- " << emriLendes[l]
             << ": " << mesatarjaPerLende(S, n, l) << endl;
    }

    // ==============================
    // Fituesit e bursës
    // ==============================
    cout << "\n==============================\n";
    cout << "FITUESIT E BURSES ELITARE STEM\n";
    cout << "Kushti: Mesatarja > 8.5\n";
    cout << "==============================\n";

    int fitues = 0;
    for (int i = 0; i < n; i++) {
        if (S[i].mesatare() > 8.5) {
            S[i].shtyp();
            fitues++;
        }
    }

    cout << "\nNumri i studenteve qe e plotesojne kushtin per burs: "
         << fitues << endl;

    return 0;
}
