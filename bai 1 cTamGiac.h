#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"

// Lớp tam giác
class cTamGiac {
private:
    cDiem A, B, C;

    double DoDai(cDiem P, cDiem Q); // khoảng cách 2 điểm

public:
    cTamGiac(); // thiết lập mặc định

    void Nhap();
    void Xuat();

    void LoaiTamGiac();   // phân loại tam giác
    double ChuVi();
    double DienTich();

    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double k);
    void ThuNho(double k);
};

#endif
