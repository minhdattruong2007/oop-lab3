#ifndef CDATHUC_H
#define CDATHUC_H

class cDaThuc {
private:
    int n;        // bậc đa thức
    double *a;    // mảng hệ số

public:
    cDaThuc();          // khởi tạo bậc 0
    cDaThuc(int n);     // khởi tạo theo bậc
    ~cDaThuc();

    void Nhap();
    void Xuat();

    double GiaTri(double x);

    cDaThuc Cong(cDaThuc b);
    cDaThuc Tru(cDaThuc b);
};

#endif

