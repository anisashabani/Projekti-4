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


int main()
{
    return 0;
}