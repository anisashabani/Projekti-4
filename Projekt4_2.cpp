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



