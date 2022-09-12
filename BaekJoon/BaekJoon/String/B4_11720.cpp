#include <iostream>
#include <string>

// Time 7.45 SOLVED
int main(int argc, char const *argv[])
{
    int nums = 0;
    std::string num = "";
    int sum = 0;
    std::cin >> nums;
    std::cin >> num;

    for(int i = 0; i < num.size(); i++)
    {
        sum += (int)(num.at(i)) - 48;
    }
    std::cout << sum;
    return 0;
}
