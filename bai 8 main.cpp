#include <iostream>
#include <vector>
#include <algorithm>
#include "cNhanVienSX.h"

using namespace std;

int main() {
    vector<cNhanVienSX> ds;
    int n;

    cout << "Nhap so nhan vien: ";
    cin >> n;

    // nhập danh sách
    for (int i = 0; i < n; i++) {
        cout << "\nNhap NV " << i + 1 << ":\n";
        cNhanVienSX nv;
        nv.Nhap();
        ds.push_back(nv);
    }

    // xuất danh sách
    cout << "\n--- DANH SACH NHAN VIEN ---\n";
    for (auto &x : ds)
        x.Xuat();

    // tổng lương
    double tong = 0;
    for (auto &x : ds)
        tong += x.GetLuong();

    cout << "\nTong luong: " << tong << endl;

    // nhân viên lương thấp nhất
    auto minIt = min_element(ds.begin(), ds.end(),
        [](cNhanVienSX a, cNhanVienSX b) {
            return a.GetLuong() < b.GetLuong();
        });

    cout << "\nNhan vien luong thap nhat:\n";
    minIt->Xuat();

    // nhân viên tuổi cao nhất
    auto maxAge = max_element(ds.begin(), ds.end(),
        [](cNhanVienSX a, cNhanVienSX b) {
            return a.Tuoi() < b.Tuoi();
        });

    cout << "\nNhan vien tuoi cao nhat:\n";
    maxAge->Xuat();

    // sắp xếp tăng dần theo lương
    sort(ds.begin(), ds.end(),
        [](cNhanVienSX a, cNhanVienSX b) {
            return a.GetLuong() < b.GetLuong();
        });

    cout << "\n--- SAP XEP THEO LUONG TANG DAN ---\n";
    for (auto &x : ds)
        x.Xuat();

    return 0;
}

