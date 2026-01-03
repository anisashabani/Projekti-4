# Projekti 4 – Student Management System (C++)

Ky projekt është një aplikacion console-based në **C++** për menaxhimin e studentëve të **Semestrit 1**.
Programi mundëson shtimin e studentëve, ruajtjen e notave, llogaritjen e mesatareve dhe
identifikimin e fituesve të bursës elitare STEM.

Programi funksionon në mënyrë interaktive dhe përfundon ekzekutimin kur përdoruesi zgjedh të mos shtojë më studentë.

---

## Lëndët (Semestri 1)
1. Algjebër Lineare & Kalkulus 1  
2. Fizikë për Inxhinieri 1  
3. Bazat e Inxhinierisë Elektrike 1  
4. Bazat e Programimit  
5. Lënda Zgjedhore  
6. Shkathtësi Komunikuese  

---

## Rregullat e Programit
- Shtimi i studentëve vazhdon vetëm nëse përdoruesi shkruan: `po` (Po, PO, p, P).
- Programi ndalet kur shkruhet: `jo` (Jo, JO, j, J).
- Notat më të vogla se **5 nuk llogariten** në mesatare.
- Mesatarja e studentit llogaritet vetëm nga notat valide (≥ 5).
- Fitues të bursës elitare STEM janë studentët me **mesatare > 8.5**.

---

## Funksionalitetet Kryesore
- Leximi i të dhënave të studentit (ID, Emër, Mbiemër, Nota)
- Llogaritja e mesatares për secilin student
- Gjetja e studentit me mesataren më të madhe dhe më të vogël
- Llogaritja e mesatares për secilën lëndë
- Identifikimi dhe shfaqja e fituesve të bursës elitare STEM
- Shfaqja e numrit total të studentëve që e plotësojnë kushtin për bursë

---

## Output Final
Programi shfaq këto rezultate përfundimtare:
- Mesatarja për secilin student
- Studenti me mesataren më të madhe dhe më të vogël
- Mesatarja për secilën lëndë
- Lista e fituesve të bursës elitare STEM
- Numri total i fituesve të bursës

---

## Kufizime
- Numri maksimal i studentëve: **50**
- Programi është **console-based**
- Nuk përdor databazë apo file për ruajtje të të dhënave

---

## Si ekzekutohet programi

### Opsioni 1: Visual Studio (Windows)
1. Clone repository-n ose shkarko ZIP-in nga GitHub.
2. Hap projektin në Visual Studio:
   - Nëse ekziston file `.sln`, hape atë.
   - Nëse jo, hape folder-in dhe file-in `Projekti 4.cpp`.
3. Kliko **Build & Run** për të ekzekutuar programin.

### Opsioni 2: Visual Studio Code
1. Clone repository-n:
   ```bash
   git clone <repo-url>
2. Hape folder-in e projektit në Visual Studio Code:
   - File → Open Folder
3. Sigurohu që ke të instaluar:
   - C++ compiler (p.sh. MinGW / g++)
   - C/C++ extension në VS Code
4. Kompilo programin:
   `g++ "Projekti 4.cpp" -o Projekti4` (Në Windows mund të përdoret edhe Projekti4.exe)
6. Ekzekuto programin:
   `./Projekti4`
   

### Opsioni 3: Online Compiler
1. Kopjo kodin e programit.
2. Hap linkun:
`https://www.programiz.com/cpp-programming/online-compiler/`
3. Ngjit kodin dhe kliko Run për ta ekzekutuar programin.

---

## Anëtarët e Grupit

- Anesa Sejdiu
- Anisa Shabani
- Orgesa Qamili
- Rina Troni
