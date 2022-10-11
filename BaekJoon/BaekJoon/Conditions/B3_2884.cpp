#include <iostream>

// Time 7.20 SOLVED
int main(int argc, char const *argv[])
{
    int hour = 0;
    int min = 0;
    std::cin >> hour >> min;

    if(min < 45 && hour == 0)
    {
        std::cout << 23 << " " << min+60-45;
    }
    else if(min < 45)
    {
        std::cout << hour - 1 << " " << min+60-45;
    }
    else{
        std::cout << hour << " " << min-45;
    }

    return 0;
}
