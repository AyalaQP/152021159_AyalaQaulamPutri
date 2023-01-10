#include <iostream>
#include <math.h>
using namespace std;

void ZigmaX(int, int, int, int);
void ZigmaY(int, int, int, int);
void ZigmaXY(int, int, int, int, int, int);
void ZigmaX2(int, int, int, int, int, int);
void ZigmaY2(int, int, int, int, int, int);
void HasilR(int, int, int, int, int, int, int, int);

int main() {
    int xindeks[5];
    int yindeks[5];
    int jumlahx;
    int jumlahy;
    int pangkatx;
    int pangkaty;
    int kali;
    int x, y, i, a, b, c, d, r, n;

    cout << "Banyak : "; cin >> n;
    cout << "====================";
    cout << endl;

    for (i = 0; i <= n; i++) {
        cout << "Input X: "; cin >> xindeks[i];
        cout << "Input Y: "; cin >> yindeks[i];
        cout << "====================";
        cout << endl;

        if (xindeks[i] < 0) {
            cout << "Input diharuskan >=0 !";
        }
        else if (yindeks[i] < 0) {
            cout << "Input diharuskan >=0 !";
        }
    }

    ZigmaX(i, jumlahx, n, xindeks[i]);
    ZigmaY(i, jumlahy, n, yindeks[i]);
    ZigmaXY(kali, i, n, kali, yindeks[i], xindeks[i]);
    ZigmaX2(i, n, a, b, xindeks[i], pangkatx);
    ZigmaY2(i, n, c, d, yindeks[i], pangkaty);
    HasilR(i, n, r, kali, jumlahx, jumlahy, pangkatx, pangkaty);

    cout << "Hasil Akhir = " << r << endl;

    if (r < 0) {
        cout << "Hubungan antara variabel X dan Y adalah NEGATIF, dimana jika nilai X bertambah, maka nilai Y pun akan MENGECIL, dan juga sebaliknya";
    }

    if (r > 0) {
        cout << "Hubungan antara variabel X dan Y adalah POSITIF, dimana jika nilai X bertambah, maka nilai Y pun akan BERTAMBAH, dan juga sebaliknya";
    }

    if (r == 0) {
        cout << "Tidak ada hubungan antara X dan Y";
    }

    return 0;
}

void ZigmaX(int i, int jumlahx, int n, int xindeks[i]) {

    void totalx = 0;

    for (i = 0; i <= n; i++) {
        jumlahx = jumlahx + xindeks[i];
    }
    return totalx = 0;
}

void ZigmaY(int i, int jumlahy, int n, int yindeks[i]) {

    void totaly = 0;

    for (i = 0; i <= n; i++) {
        jumlahy = jumlahy + yindeks[i];
    }
    return totaly = 0;
}

void ZigmaXY(int hasil, int kali, int i, int n, int yindeks[i], int xindeks[i]) {

    void kalixy = 0;

    for (i = 0; i <= n; i++) {
        kali = xindeks[i] * yindeks[i];
    }
    return kalixy = 0;
}

void ZigmaX2(int i, int n, int a, int b, int xindeks[i], int pangkatx) {

    void pangkat = 0;
    a = xindeks[i];
    b = 2;

    for (i = 0; i <= n; i++) {
        pangkatx = pow(a, b);
    }
    return pangkat = 0;
}

void ZigmaY2(int i, int n, int c, int d, int yindeks[i], int pangkaty) {

    void pangkat = 0;
    c = yindeks[i];
    d = 2;

    for (i = 0; i <= n; i++) {
        pangkaty = pow(c, d);
    }
    return pangkat = 0;
}

void HasilR(int i, int n, int r, int kali, int jumlahx, int jumlahy, int pangkatx, int pangkaty) {

    void akhir = 0;

    for (i = 0; i <= n; i++) {
        r = kali - jumlahx * jumlahy / sqrt(pangkatx - pangkatx) * sqrt(pangkaty - pangkaty);
    }
    return akhir = 0;
}