#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <string>
using namespace std;

class cNhanVienSX {
private:
    string maNV;
    string hoTen;
    string ngaySinh;
    int soSP;
    double donGia;

public:
    cNhanVienSX();

    void Nhap();
    void Xuat();

    double TinhLuong();
    int Tuoi(); // đơn giản hóa theo năm

    double GetLuong();
};

#endif

