#include "cDaGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

cDaGiac::cDaGiac() {
    n = 0;
    ds = NULL;
}

cDaGiac::~cDaGiac() {
    delete[] ds;
}

// nhập đa giác
void cDaGiac::Nhap() {
    cout << "Nhap so dinh: ";
    cin >> n;

    ds = new cDiem[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap dinh " << i + 1 << ": ";
        ds[i].Nhap();
    }
}

// xuất đa giác
void cDaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
        cout << " ";
    }
    cout << endl;
}

// chu vi đa giác
double cDaGiac::ChuVi() {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;

        double dx = ds[i].x - ds[j].x;
        double dy = ds[i].y - ds[j].y;

        sum += sqrt(dx*dx + dy*dy);
    }

    return sum;
}

// diện tích (công thức shoelace)
double cDaGiac::DienTich() {
    double s1 = 0, s2 = 0;

    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;

        s1 += ds[i].x * ds[j].y;
        s2 += ds[i].y * ds[j].x;
    }

    return fabs(s1 - s2) / 2;
}

// tịnh tiến
void cDaGiac::TinhTien(double dx, double dy) {
    for (int i = 0; i < n; i++)
        ds[i].TinhTien(dx, dy);
}

// quay
void cDaGiac::Quay(double goc) {
    for (int i = 0; i < n; i++)
        ds[i].Quay(goc);
}

// phóng to
void cDaGiac::PhongTo(double k) {
    for (int i = 0; i < n; i++) {
        ds[i].x *= k;
        ds[i].y *= k;
    }
}

// thu nhỏ
void cDaGiac::ThuNho(double k) {
    for (int i = 0; i < n; i++) {
        ds[i].x /= k;
        ds[i].y /= k;
    }
}

