#ifndef CARRAY_H
#define CARRAY_H

class cArray {
private:
    int n;
    int *a;

    bool isPrime(int x);

public:
    cArray();
    ~cArray();

    void NhapRandom(int n);
    void Xuat();

    int DemXuatHien(int x);

    bool KiemTraTangDan();

    int TimSoLeNhoNhat();
    int TimSoNguyenToLonNhat();

    void SapXepTang();
    void SapXepGiam();
};

#endif

