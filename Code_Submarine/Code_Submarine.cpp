#include <iostream>

int main()
{
    //Game premise and instructions
    std::cout << "You're attempting to sabotage the engine of a Nuclear Nazi sub." << "\n";
    std::cout << "You must enter the correct code sequence to flood the first engine compartment!" << "\n";

    //declare 3 number code
    int a = 4;
    int b = 8;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << sum << "\n";
    std::cout << product << "\n";

    system("PAUSE");
}
