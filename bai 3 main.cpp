#include <iostream>
#include "cArray.h"

using namespace std;

int main() {
    cArray arr;

    int n;
    cout << "Nhap n: ";
    cin >> n;

    arr.NhapRandom(n);

    cout << "\nMang ban dau:\n";
    arr.Xuat();

    int x;
    cout << "\nNhap x can dem: ";
    cin >> x;

    cout << "So lan xuat hien cua " << x << ": "
         << arr.DemXuatHien(x) << endl;

    cout << "Mang tang dan? "
         << (arr.KiemTraTangDan() ? "Co" : "Khong") << endl;

    cout << "So le nho nhat: "
         << arr.TimSoLeNhoNhat() << endl;

    cout << "So nguyen to lon nhat: "
         << arr.TimSoNguyenToLonNhat() << endl;

    arr.SapXepTang();
    cout << "\nSau sap xep tang:\n";
    arr.Xuat();

    arr.SapXepGiam();
    cout << "Sau sap xep giam:\n";
    arr.Xuat();

    return 0;
}

