#include <iostream>
#include <array>

// Time : 1602 SOLVED
int main(int argc, char const *argv[])
{
    int totalPiece = 16;
    int totalKing = 1;
    int totalQueen = 1;
    int totalRook = 2;
    int totalBeshop = 2;
    int totalNight = 2;
    int totalPawn = 8;
    int ChessPiece[] = {totalKing, totalQueen, totalRook, totalBeshop, totalNight, totalPawn};
    std::array<int, 5> test = {};

    for(int i = 0; i < test.size(); i++)
    {
        std::cout << test[i];
    }

    int currentPiece = 0;
    int currentKing = 0;
    int currentQueen = 0;
    int currentRook = 0;
    int currentBeshop = 0;
    int currentNight = 0;
    int currentPawn = 0;
    int currentChessPiece[6] = {};

    for(int i = 0; i < 6; i++)
    {
        std::cin >> currentChessPiece[i];
    }

    for(int j = 0; j < 6; j++)
    {
        int missingPieces = 0;
        missingPieces = ChessPiece[j] - currentChessPiece[j];
        std::cout << missingPieces << " ";
    }

    

    return 0;
}
