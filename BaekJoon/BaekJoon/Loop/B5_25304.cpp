#include <iostream>

// Time 4.42 SOLVED;
int main(int argc, char const *argv[])
{
    int totalCostOnBill = 0;
    int totalCost = 0;
    int numberOfGoods = 0;
    int price = 0;
    int quantity = 0;

    std::cin >> totalCostOnBill;
    std::cin >> numberOfGoods;

    for(int i = 0; i < numberOfGoods; i++)
    {
        std::cin >> price >> quantity;
        totalCost += price * quantity;
    }

    if(totalCost == totalCostOnBill)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}
