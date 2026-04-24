#include <iostream>
#include "cDaGiac.h"

using namespace std;

int main() {
    cDaGiac g;

    g.Nhap();

    cout << "\nDa giac ban dau:\n";
    g.Xuat();

    cout << "Chu vi: " << g.ChuVi() << endl;
    cout << "Dien tich: " << g.DienTich() << endl;

    g.TinhTien(1,1);
    cout << "\nSau tinh tien:\n";
    g.Xuat();

    g.Quay(90);
    cout << "\nSau quay 90 do:\n";
    g.Xuat();

    g.PhongTo(2);
    cout << "\nSau phong to:\n";
    g.Xuat();

    g.ThuNho(2);
    cout << "\nSau thu nho:\n";
    g.Xuat();

    return 0;
}
