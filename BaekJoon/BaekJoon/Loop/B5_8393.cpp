#include <iostream>

// Time 4.00 SOLVED
int main(int argc, char const *argv[])
{
    int num = 0;
    int sum = 0;
    std::cin >> num;

    for(int i = 0; i < num; i++)
    {
        sum += num-i;        
    }
    std::cout << sum;
    return 0;
}
