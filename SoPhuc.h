#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>

class SoPhuc {
private:
    double thuc;
    double ao;

public:
    // Constructor với phần ảo mặc định = 0
    SoPhuc(double t = 0.0, double a = 0.0);

    // Các phép toán số phức
    SoPhuc operator+(const SoPhuc& other) const;
    SoPhuc operator-(const SoPhuc& other) const;
    SoPhuc operator*(const SoPhuc& other) const;
    SoPhuc operator/(const SoPhuc& other) const;

    // So sánh
    bool operator==(const SoPhuc& other) const;
    bool operator!=(const SoPhuc& other) const;

    // Nhập và xuất
    friend std::ostream& operator<<(std::ostream& out, const SoPhuc& sp);
    friend std::istream& operator>>(std::istream& in, SoPhuc& sp);
};

#endif
