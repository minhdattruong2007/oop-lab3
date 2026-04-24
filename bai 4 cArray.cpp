#include "cArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

cArray::cArray() {
    n = 0;
    a = NULL;
}

cArray::~cArray() {
    delete[] a;
}

bool cArray::isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

void cArray::NhapRandom(int n) {
    this->n = n;
    a = new int[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
}

void cArray::Xuat() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int cArray::DemXuatHien(int x) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x) dem++;
    return dem;
}

bool cArray::KiemTraTangDan() {
    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return false;
    return true;
}

int cArray::TimSoLeNhoNhat() {
    int min = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] < min) {
                min = a[i];
                found = true;
            }
        }
    }

    if (!found) return -1;
    return min;
}

int cArray::TimSoNguyenToLonNhat() {
    int max = -1;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            if (a[i] > max)
                max = a[i];
        }
    }

    return max;
}

void cArray::SapXepTang() {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

void cArray::SapXepGiam() {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

