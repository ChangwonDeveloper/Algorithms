#include <iostream>
#include <math.h>
// Time 30.00 SOLVED
int main(int argc, char const *argv[])
{
    int fixedCost, variableCost, price;
    int totalCost = 0;
    int totalProfit = 0;
    int quantity = 0;
    int margin = 0;
    std::cin >> fixedCost >> variableCost >> price;

    if(variableCost >= price)
    {
        std::cout << -1;
        return 0;
    }

    margin = price - variableCost;
    quantity = ceil((fixedCost / margin));

    if(fixedCost < margin * quantity)
    {
        std::cout << quantity;
    }
    else
    {
        std::cout << quantity + 1;
    }
    // while(totalProfit <= fixedCost)
    // {
    //     totalProfit += margin;
    //     quantity++;
    // }


    return 0;
}
