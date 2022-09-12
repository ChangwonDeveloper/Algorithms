#include <iostream>
#include <string>
// Time 9.16 SOLVED
int main(int argc, char const *argv[])
{
    int nums = 0;
    std::cin >> nums;
    int repeatCount = 0;
    std::string sentence;
    for(int i = 0; i < nums; i++)    
    {
        std::cin >> repeatCount >> sentence;
        for(int j = 0; j < sentence.length(); j++)
        {
            for(int f = 0; f < repeatCount; f++)
            {
                std::cout << sentence.at(j);
            }
        }
        std::cout << "\n";
    }
    return 0;
}
