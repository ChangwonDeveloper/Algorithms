#include <iostream>
#include <array>
#include <algorithm>

// Time 35.00 SOLVED
int main(int argc, char const *argv[])
{
    int num = 0;
    int count = 0;
    std::array<int, 3> nums;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> num;
        nums[i] = num;
    }

    std::sort(nums.begin(), nums.end());
    for(int j = 1; j < 3; j++)
    {
        if(nums[j-1] == nums[j])
        {
            count++;
        }
    }

    if(count == 2)
    {
        std::cout << 10000 + nums.front() * 1000;
    }
    else if(count == 1)
    {
        std::cout << 1000 + nums[1] * 100;
    }
    else
    {
        std::cout << nums.back() * 100;
    }



    return 0;
}
