#include "cDaThuc.h"
#include <iostream>
#include <cmath>

using namespace std;

// khởi tạo bậc 0
cDaThuc::cDaThuc() {
    n = 0;
    a = new double[1];
    a[0] = 0;
}

// khởi tạo theo bậc
cDaThuc::cDaThuc(int n) {
    this->n = n;
    a = new double[n + 1];
}

cDaThuc::~cDaThuc() {
    delete[] a;
}

// nhập đa thức
void cDaThuc::Nhap() {
    cout << "Nhap bac n: ";
    cin >> n;

    delete[] a;
    a = new double[n + 1];

    cout << "Nhap he so (tu bac cao -> thap):\n";
    for (int i = 0; i <= n; i++)
        cin >> a[i];
}

// xuất đa thức
void cDaThuc::Xuat() {
    bool first = true;

    for (int i = 0; i <= n; i++) {

        if (a[i] == 0) continue;

        if (!first) {
            if (a[i] > 0) cout << " + ";
            else cout << " - ";
        } else {
            if (a[i] < 0) cout << "-";
        }

        cout << (a[i] < 0 ? -a[i] : a[i]);

        if (n - i > 1)
            cout << "x^" << (n - i);
        else if (n - i == 1)
            cout << "x";

        first = false;
    }

    if (first)
        cout << "0";
}

// tính giá trị
double cDaThuc::GiaTri(double x) {
    double kq = 0;

    for (int i = 0; i <= n; i++)
        kq += a[i] * pow(x, n - i);

    return kq;
}

// cộng đa thức
cDaThuc cDaThuc::Cong(cDaThuc b) {
    cDaThuc kq;

    kq.n = max(n, b.n);
    delete[] kq.a;
    kq.a = new double[kq.n + 1];

    for (int i = 0; i <= kq.n; i++)
        kq.a[i] = 0;

    int d1 = kq.n - n;
    int d2 = kq.n - b.n;

    for (int i = 0; i <= n; i++)
        kq.a[i + d1] += a[i];

    for (int i = 0; i <= b.n; i++)
        kq.a[i + d2] += b.a[i];

    return kq;
}

// trừ đa thức
cDaThuc cDaThuc::Tru(cDaThuc b) {
    int MaxBac = max(n, b.n);
    cDaThuc kq;

    kq.n = MaxBac;
    kq.a = new double[MaxBac + 1];

    for (int i = 0; i <= MaxBac; i++) {
        kq.a[i] = 0;
    }

    int offset1 = MaxBac - n;
    int offset2 = MaxBac - b.n;

    for (int i = 0; i <= n; i++) {
        kq.a[i + offset1] += a[i];
    }

    for (int i = 0; i <= b.n; i++) {
        kq.a[i + offset2] -= b.a[i];
    }

    return kq;
}

