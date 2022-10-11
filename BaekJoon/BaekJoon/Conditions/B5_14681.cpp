#include <iostream>


// Time 14.30 SOLVED

int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 0;
    std::cin >> x >> y;


        if(x > 0 && y > 0)
        {
            std::cout << 1;
        }
        else if(x > 0 && y < 0)
        {
            std::cout << 4;
        }
        else if(y > 0)
        {
            std::cout << 2;
        }
        else if(y < 0)
        {
            std::cout << 3;
        }
    
    
    return 0;
}
