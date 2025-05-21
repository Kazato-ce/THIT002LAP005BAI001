#include "SoPhuc.h"

SoPhuc::SoPhuc(double t, double a) : thuc(t), ao(a) {}

// Cộng
SoPhuc SoPhuc::operator+(const SoPhuc& other) const {
    return SoPhuc(thuc + other.thuc, ao + other.ao);
}

// Trừ
SoPhuc SoPhuc::operator-(const SoPhuc& other) const {
    return SoPhuc(thuc - other.thuc, ao - other.ao);
}

// Nhân
SoPhuc SoPhuc::operator*(const SoPhuc& other) const {
    return SoPhuc(thuc * other.thuc - ao * other.ao,
                  thuc * other.ao + ao * other.thuc);
}

// Chia
SoPhuc SoPhuc::operator/(const SoPhuc& other) const {
    double mau = other.thuc * other.thuc + other.ao * other.ao;
    return SoPhuc((thuc * other.thuc + ao * other.ao) / mau,
                  (ao * other.thuc - thuc * other.ao) / mau);
}

// So sánh ==
bool SoPhuc::operator==(const SoPhuc& other) const {
    return thuc == other.thuc && ao == other.ao;
}

// So sánh !=
bool SoPhuc::operator!=(const SoPhuc& other) const {
    return !(*this == other);
}

// Xuất
std::ostream& operator<<(std::ostream& out, const SoPhuc& sp) {
    out << sp.thuc;
    if (sp.ao >= 0)
        out << " + " << sp.ao << "i";
    else
        out << " - " << -sp.ao << "i";
    return out;
}

// Nhập
std::istream& operator>>(std::istream& in, SoPhuc& sp) {
    std::cout << "Nhập phần thực: ";
    in >> sp.thuc;
    std::cout << "Nhập phần ảo: ";
    in >> sp.ao;
    return in;
}
