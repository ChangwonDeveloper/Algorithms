#include <iostream>
#include <string>
#include <cstring>

// Time 27.20 SOLVED
int main(int argc, char const *argv[])
{
    std::string word;
    std::string croAlphabat[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    std::string temp1;
    std::string temp2;
    bool isCroAlphabat = false;
    int count = 0;
    std::cin >> word;

    for(int i = 0; i < word.size(); i++)
    {
        isCroAlphabat = false;

        if(i+1 == word.size())
        {
            count++;
            break;
        }

        temp2 = word.substr(i, 3);
        
        if(temp2 == croAlphabat[2])
        {
            count++;
            i += 2;
            continue;
        }

        temp1 = word.substr(i, 2);
        
        for(int j = 0; j < 8; j++)
        {
            if(temp1 == croAlphabat[j])
            {
                count++;
                i++;
                isCroAlphabat = true;
                break;
            }
        }

        if(!isCroAlphabat)
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}
