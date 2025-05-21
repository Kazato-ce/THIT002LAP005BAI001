#include <iostream>
#include "SoPhuc.h"

int main() {
    SoPhuc a, b;

    std::cout << "Nhập số phức a:\n";
    std::cin >> a;

    std::cout << "Nhập số phức b:\n";
    std::cin >> b;

    SoPhuc tong = a + b;
    SoPhuc hieu = a - b;
    SoPhuc tich = a * b;
    SoPhuc thuong = a / b;

    std::cout << "\nKết quả:\n";
    std::cout << "a + b = " << tong << "\n";
    std::cout << "a - b = " << hieu << "\n";
    std::cout << "a * b = " << tich << "\n";
    std::cout << "a / b = " << thuong << "\n";

    std::cout << "a " << (a == b ? "bằng" : "khác") << " b\n";

    return 0;
}
