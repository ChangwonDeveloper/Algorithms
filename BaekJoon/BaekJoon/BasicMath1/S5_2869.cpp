#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A, B, V;
    std::cin >> A >> B >> V;
    int day = 0;
    int MovePerDay = A - B;
    int rest = 0;

    V -= MovePerDay;
    day = V / MovePerDay;
    rest = V % MovePerDay;

    if(rest == 0)
    {
        std::cout << day + 1;
    }
    else
    {
        std::cout << day;
    }
    return 0;
}
