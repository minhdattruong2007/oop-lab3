#include "cNhanVienSX.h"
#include <iostream>

using namespace std;

cNhanVienSX::cNhanVienSX() {
    soSP = 0;
    donGia = 0;
}

void cNhanVienSX::Nhap() {
    cout << "Ma NV: ";
    cin >> maNV;

    cin.ignore();
    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Ngay sinh (YYYY): ";
    cin >> ngaySinh;

    cout << "So san pham: ";
    cin >> soSP;

    cout << "Don gia: ";
    cin >> donGia;
}

void cNhanVienSX::Xuat() {
    cout << maNV << " | "
         << hoTen << " | "
         << ngaySinh << " | "
         << soSP << " | "
         << donGia << " | "
         << TinhLuong() << endl;
}

double cNhanVienSX::TinhLuong() {
    return soSP * donGia;
}

double cNhanVienSX::GetLuong() {
    return TinhLuong();
}

// giả lập tuổi = 2026 - năm sinh
int cNhanVienSX::Tuoi() {
    return 2026 - stoi(ngaySinh);
}

