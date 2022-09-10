#include <iostream>

// Time 1211 SOLVED
int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;
    int hund = b / 100;
    int ten = (b - (hund*100)) / 10;
    int one = b - (hund*100) - (ten*10);
    
    int oneSum = a * one;
    int tenSum = a * ten;
    int hundSum = a * hund;
    int total = oneSum + tenSum * 10 + hundSum * 100;
    std::cout << oneSum << std::endl;
    std::cout << tenSum << std::endl;
    std::cout << hundSum << std::endl;
    std::cout << total << std::endl;
    return 0;
}
