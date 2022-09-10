#include <iostream>

// Time 8.16 SOLVED
int main(int argc, char const *argv[])
{
    int hour = 0;
    int min = 0;
    int time = 0;
    std::cin >> hour >> min;
    std::cin >> time;
    int sum = min + time;
    int plusHour = sum / 60;
    int leftMin = sum % 60;
    int totalHour = hour + plusHour;
    int leftHour = totalHour % 24;

    if(totalHour % 24 != totalHour)
    {
        std::cout << leftHour << " " << leftMin;
    }
    else if(sum >= 60)
    {
        std::cout << hour+plusHour << " " << leftMin;
    }
    else
    {
        std::cout << leftHour << " " << leftMin;
    }
    
    
    return 0;
}
