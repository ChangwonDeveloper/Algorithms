#include <iostream>
#include <string>

// Time 10.12 SOLVED
int main(int argc, char const *argv[])
{
    int num1, num2;
    std::string snum1, snum2;
    char temp;;
    std::cin >> snum1 >> snum2;

    temp = snum1.back();
    snum1.back() = snum1.front();
    snum1.front() = temp;

    temp = snum2.back();
    snum2.back() = snum2.front();
    snum2.front() = temp;

    num1 = std::stoi(snum1);
    num2 = std::stoi(snum2);

    if(num1 >= num2)
    {
        std::cout << num1;
    }
    else
    {
        std::cout << num2;
    }


        
    return 0;
}
