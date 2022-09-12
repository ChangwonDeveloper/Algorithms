#include <iostream>
#include <string>
#include <array>
#include <algorithm>

// Time 46.55 SOLVED
int main(int argc, char const *argv[])
{
    std::string word = "";
    char mostUsedAlphabat;
    int frequency = 0;
    int count = 0;
    bool isTheMost = true;
    std::cin >> word;
    std::array<int, 26> alphabat = {0};

    if(word.size() == 1)
    {
        if((int)word.at(0) < 97)
        {
            std::cout << word;
            return 0;
        }
        else
        {
            mostUsedAlphabat = word.at(0) - 32;
            std::cout << mostUsedAlphabat;
            return 0;
        }
    }

    for(int i = 0; i < word.size(); i++)
    {
        if((int)word.at(i) >= 97)
        {
            alphabat[(int)word.at(i)-97]++;
        }
        else
        {
            alphabat[(int)word.at(i)-65]++;
        }
    }

    for(int i = 0; i < alphabat.size(); i++)
    {
        if(count < alphabat[i])
        {
            count = alphabat[i];
            isTheMost = true;
            mostUsedAlphabat = i+65;
        }
        else if(count == alphabat[i])
        {
            isTheMost = false;
        }
    }

    if(isTheMost)
    {
        std::cout << mostUsedAlphabat;
    }
    else
    {
        std::cout << "?";
    }

    return 0;
}
