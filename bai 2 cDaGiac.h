#ifndef CDAGIAC_H
#define CDAGIAC_H

#include "cDiem.h"

// Lớp đa giác
class cDaGiac {
private:
    int n;
    cDiem *ds;

public:
    cDaGiac();
    ~cDaGiac();

    void Nhap();
    void Xuat();

    double ChuVi();
    double DienTich();

    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double k);
    void ThuNho(double k);
};

#endif

