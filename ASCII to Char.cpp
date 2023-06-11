#include <iostream>
int main() {
    int a {};
    std::cout << "===================================================="<< std::endl;
    std::cout << "========== converting form ascii to char ===========" << std::endl;
    std::cout << "====================================================" << std::endl; 
    std::cin >> a;
    std::cout << char(a) << std::endl;
    return 0;
}
