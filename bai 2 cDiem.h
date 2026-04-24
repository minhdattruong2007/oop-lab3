#ifndef CDIEM_H
#define CDIEM_H

class cDiem {
public:
    double x, y;

    cDiem();

    void Nhap();
    void Xuat();

    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double k);
    void ThuNho(double k);
};

#endif

