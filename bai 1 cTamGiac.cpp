#include "cTamGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

// thiết lập mặc định
cTamGiac::cTamGiac() {}

// khoảng cách 2 điểm
double cTamGiac::DoDai(cDiem P, cDiem Q) {
    return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

void cTamGiac::Nhap() {
    cout << "Nhap A: "; A.Nhap();
    cout << "Nhap B: "; B.Nhap();
    cout << "Nhap C: "; C.Nhap();
}

void cTamGiac::Xuat() {
    cout << "A"; A.Xuat();
    cout << " B"; B.Xuat();
    cout << " C";
    C.Xuat();
    cout << endl;
}

double cTamGiac::ChuVi() {
    double a = DoDai(B, C);
    double b = DoDai(A, C);
    double c = DoDai(A, B);
    return a + b + c;
}

double cTamGiac::DienTich() {
    double a = DoDai(B, C);
    double b = DoDai(A, C);
    double c = DoDai(A, B);

    double p = ChuVi() / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::LoaiTamGiac() {
    double a = DoDai(B, C);
    double b = DoDai(A, C);
    double c = DoDai(A, B);

    double eps = 1e-6;

    // kiểm tra không phải tam giác
    double p = ChuVi() / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    if (S < eps) {
        cout << "Khong phai tam giac\n";
        return;
    }

    // tam giác đều
    if (fabs(a - b) < eps && fabs(b - c) < eps) {
        cout << "Tam giac deu\n";
        return;
    }

    bool vuong = (fabs(a*a + b*b - c*c) < eps ||
                  fabs(a*a + c*c - b*b) < eps ||
                  fabs(b*b + c*c - a*a) < eps);

    bool can = (fabs(a - b) < eps ||
                fabs(b - c) < eps ||
                fabs(a - c) < eps);

    if (vuong && can)
        cout << "Tam giac vuong can\n";
    else if (vuong)
        cout << "Tam giac vuong\n";
    else if (can)
        cout << "Tam giac can\n";
    else
        cout << "Tam giac thuong\n";
}

void cTamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void cTamGiac::Quay(double goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}

void cTamGiac::PhongTo(double k) {
    A.PhongTo(k);
    B.PhongTo(k);
    C.PhongTo(k);
}

void cTamGiac::ThuNho(double k) {
    A.ThuNho(k);
    B.ThuNho(k);
    C.ThuNho(k);
}

