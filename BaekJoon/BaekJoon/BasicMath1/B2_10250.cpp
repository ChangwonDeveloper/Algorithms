#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    int T, H, W, N;
    std::cin >> T;
    
    
    for(int i = 0; i < T; i++)
    {
        std::cin >> H >> W >> N;
        int CurrentHeight = N % H;
        int CurrentWitdth = N / H + 1;
        if(CurrentHeight == 0)
        {
            CurrentHeight = H;
        }

        if(CurrentWitdth >= 10)
        {
            std::string RoomNumber = std::to_string(CurrentHeight) + std::to_string(CurrentWitdth);
            std::cout << std::stoi(RoomNumber) << std::endl;
        }
        else
        {
            std::string RoomNumber = std::to_string(CurrentHeight) + "0" + std::to_string(CurrentWitdth);
            std::cout << std::stoi(RoomNumber) << std::endl;
        }
    }
    
    
    return 0;
}
