#include <iostream>
// Time 2.35 SOLVED
int main(int argc, char const *argv[])
{
    int laps = 0;
    int num1 = 0;
    int num2 = 0;
    std::cin >> laps;
    
    for(int i = 0; i < laps; i++)
    {
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << std::endl;
    }

    return 0;
}
