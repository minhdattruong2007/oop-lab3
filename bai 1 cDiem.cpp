#include "cDiem.h"
#include <iostream>
#include <cmath>

using namespace std;

// khởi tạo mặc định
cDiem::cDiem() {
    x = 0;
    y = 0;
}

void cDiem::Nhap() {
    cin >> x >> y;
}

void cDiem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

void cDiem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}

void cDiem::Quay(double goc) {
    double rad = goc * 3.141592653589793 / 180;

    double xNew = x * cos(rad) - y * sin(rad);
    double yNew = x * sin(rad) + y * cos(rad);

    x = xNew;
    y = yNew;
}

void cDiem::PhongTo(double k) {
    x *= k;
    y *= k;
}

void cDiem::ThuNho(double k) {
    x /= k;
    y /= k;
}
