#include <iostream>

// Time 3.26 SOLVED
int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    int sum = a+b;
    int subtract = a-b;
    int multiple = a*b;
    int divide = a/b;
    int remainder = a%b;

    std::cout << sum << std::endl;
    std::cout << subtract << std::endl;
    std::cout << multiple << std::endl;
    std::cout << divide << std::endl;
    std::cout << remainder << std::endl;

    return 0;
}
