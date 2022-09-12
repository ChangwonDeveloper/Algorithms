#include <iostream>
#include <string>

// Time 20.00 SOLVED
int main(int argc, char const *argv[])
{
    int count = 0;
    std::string sentence;
    std::getline(std::cin, sentence);

    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence.at(i) == 32)
        {
            count++;
        }
    }

    if(sentence.front() != 32)
    {
        count++;
    }

    if(sentence.back() == 32)
    {
        count--;
    }

    if(sentence.empty())
    {
        count == 0;
    }

    std::cout << count;


    return 0;
}
