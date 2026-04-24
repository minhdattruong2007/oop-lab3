#ifndef CDIEM_H
#define CDIEM_H

// Lớp điểm trong mặt phẳng Oxy
class cDiem {
public:
    double x, y;

    // thiết lập mặc định
    cDiem();

    void Nhap();
    void Xuat();

    void TinhTien(double dx, double dy); // tịnh tiến điểm
    void Quay(double goc);               // quay quanh gốc O
    void PhongTo(double k);
    void ThuNho(double k);
};

#endif
