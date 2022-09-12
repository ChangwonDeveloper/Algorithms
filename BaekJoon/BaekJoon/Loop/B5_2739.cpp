#include <iostream>

// Time 1.59 SOLVED
int main(int argc, char const *argv[])
{
    int num = 0;
    std::cin >> num;

    for(int i = 1; i < 10; i++)    
    {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    }
    return 0;
}
