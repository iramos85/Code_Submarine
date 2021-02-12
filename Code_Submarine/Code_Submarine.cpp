#include <iostream>

void PrintIntroduction() 
{
    std::cout << "******************************************\n";
    std::cout << "************* Code Submarine *************\n";
    std::cout << "******************************************\n\n";
    std::cout << "                                 o o\n";
    std::cout << "                                 o ooo\n";
    std::cout << "                                   o oo\n";
    std::cout << "                                      o o        | #)\n";
    std::cout << "                                       oo     _|_|_#_\n";
    std::cout << "                                         o   | U505  |\n";
    std::cout << "    __                    ___________________|       |_________________\n";
    std::cout << "   |   -_______-----------                                              |\n";
    std::cout << "  >|    _____                                                   --->     )\n";
    std::cout << "   |__ -     ---------_________________________________________________ /\n\n\n";

    //Game premise and instructions
    std::cout << "You're attempting to sabotage the engine of a Nuclear Nazi sub.\n";
    std::cout << "You must enter the correct code sequence to flood the first engine compartment!\n\n";
}

void PlayGame() 
{
    PrintIntroduction();

    //declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //print sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum << "\n";
    std::cout << "+ The codes multiply to give: " << CodeProduct << "\n\n";

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    //std::cout << "You input: " << GuessA << ", " << GuessB << " and " << GuessC << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "!! You hear the warning siren go off as water floods into the compartment. You've successfully flooded the compartment!\n\n";
    }
    else {
        std::cout << "!! You hear the stomping of boots as Nazi Guards close in on your position. Your mission has failed. !!\n\n";
    }
}

int main()
{
    PlayGame();

    system("PAUSE");
}
