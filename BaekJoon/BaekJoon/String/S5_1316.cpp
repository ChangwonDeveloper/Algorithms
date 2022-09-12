#include <iostream>
#include <string>
#include <array>

// Time 19.32 SOLVED
bool isContinuousWord(std::string word);

int main(int argc, char const *argv[])
{
    int wordNum;
    std::string word;
    int count = 0;
    std::cin >> wordNum;

    for(int i = 0; i < wordNum; i++)
    {
        std::cin >> word;
        if(isContinuousWord(word))
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}

bool isContinuousWord(std::string word)
{
    std::array<bool, 26> alphabat = {false};

    for(int i = 0; i < word.size(); i++)
    {
        if(alphabat[(int)word.at(i)-97] == true)
        {
            return false;
        }

        if(i == word.size() -1)
        {
            return true;
        }

        if(word.at(i) != word.at(i+1))
        {
            alphabat[(int)word.at(i)-97] = true;
        }
    }
}