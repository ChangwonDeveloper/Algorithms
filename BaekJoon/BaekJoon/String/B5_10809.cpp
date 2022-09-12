#include <iostream>
#include <string>
// Time 11.07 SOLVED
int main(int argc, char const *argv[])
{
    std::string word = "";
    std::cin >> word;
    int alphabat[26] = {-1};
    int sequence = 0;

    for(int i = 0; i < 26; i++)
    {
        alphabat[i] = -1;
    }

    for(int i = 0; i < word.size(); i++)
    {
        sequence = (int)word.at(i) - 97;
        if(alphabat[sequence] == -1)
        {
            alphabat[sequence] = i;
        }

    }

    for(int i = 0; i < 26; i++)
    {
        std::cout << alphabat[i] << " ";
    }

    return 0;
}
