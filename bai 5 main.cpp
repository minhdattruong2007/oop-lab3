#include <iostream>
#include "cDaThuc.h"

using namespace std;

int main() {
    cDaThuc p1, p2;

    cout << "Nhap da thuc P1:\n";
    p1.Nhap();

    cout << "Nhap da thuc P2:\n";
    p2.Nhap();

    cout << "\nP1 = ";
    p1.Xuat();
    cout << endl;

    cout << "P2 = ";
    p2.Xuat();
    cout << endl;

    // CỘNG
    cDaThuc tong = p1.Cong(p2);
    cout << "\nP1 + P2 = ";
    tong.Xuat();
    cout << endl;

    // TRỪ
    cDaThuc hieu = p1.Tru(p2);
    cout << "P1 - P2 = ";
    hieu.Xuat();
    cout << endl;

    // GIÁ TRỊ
    double x;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "P1(x) = " << p1.GiaTri(x) << endl;
    cout << "P2(x) = " << p2.GiaTri(x) << endl;

    return 0;
}

