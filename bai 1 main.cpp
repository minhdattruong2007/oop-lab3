#include <iostream>
#include "cTamGiac.h"

using namespace std;

int main() {
    cTamGiac tg;

    tg.Nhap();

    cout << "\nTam giac ban dau:\n";
    tg.Xuat();

    cout << "Chu vi: " << tg.ChuVi() << endl;
    cout << "Dien tich: " << tg.DienTich() << endl;

    tg.LoaiTamGiac();

    //  TINH TIEN
    tg.TinhTien(1,1);
    cout << "\nSau khi tinh tien (1,1):\n";
    tg.Xuat();

    //  QUAY
    tg.Quay(90);
    cout << "\nSau khi quay 90 do:\n";
    tg.Xuat();

    //  PHONG TO
    tg.PhongTo(2);
    cout << "\nSau khi phong to x2:\n";
    tg.Xuat();

    //  THU NHO
    tg.ThuNho(2);
    cout << "\nSau khi thu nho x2:\n";
    tg.Xuat();

    return 0;
}

