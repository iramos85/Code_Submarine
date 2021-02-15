#include <iostream>

void PrintGameTitle() 
{
    std::cout << "******************************************\n";
    std::cout << "************* Code Submarine *************\n";
    std::cout << "******************************************\n\n";
    std::cout << "                                 o o\n";
    std::cout << "                                 o ooo\n";
    std::cout << "                                   o oo\n";
    std::cout << "                                      o o        | #)\n";
    std::cout << "                                       oo     _|_|_#_\n";
    std::cout << "                                         o   | U571  |\n";
    std::cout << "    __                    ___________________|       |_________________\n";
    std::cout << "   |   -_______-----------                                              |\n";
    std::cout << "  >|    _____                                                   --->     )\n";
    std::cout << "   |__ -     ---------_________________________________________________ /\n\n\n";
}



void PrintIntroduction(int Difficulty) 
{
    //Game premise and instructions
    std::cout << "\n\nYou're attempting to sabotage the level " << Difficulty;
    std::cout << " engine of a Nuclear Nazi sub.\nYou must enter the correct code sequence to flood the first engine compartment!\n\n";
}

bool PlayGame(int Difficulty) 
{

    PrintIntroduction(Difficulty);

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
    int WrongAnswer = GuessSum != CodeSum && GuessProduct != CodeProduct;
    int Tries = 3;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n!! You hear the warning siren go off as water floods into the compartment. You've successfully flooded the compartment! A hatch opens up to the next level...\n\n";
        return true;
    }
    else if (WrongAnswer && Tries >= 1) {
        Tries--;
        std::cout << "\n!! You hear the stomping of boots as Nazi Guards are closing in on your position. Time is running out, you have " << Tries << " attempts left!!\n\n";
        return false;
    }
    else if (Tries == 0) {
        std::cout << "\n!! They've located you! Herr Furchtbar will not be merciful.....\n\n";
    }
}

int main()
{
    PrintGameTitle();

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    int Tries = 3;

    while (LevelDifficulty <= MaxDifficulty && Tries >= 1) //loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clear any errors
        std::cin.ignore(); //Discards the buffer

        if (bLevelComplete) 
        {
            ++LevelDifficulty;
        }
        else {
            LevelDifficulty;
            --Tries;
        }
    }
    
    std::cout << "\n You've successfully flooded the submarine. As rivets pop and the hull groans under the increasing water pressure, you feel a sense of calm as you know you've saved countless lives and taken down Hitler's terrible weapon. Well done Agent.!\n";
    std::cout << "       .---.\n";
    std::cout << "  ___ /_____|\n";
    std::cout << " //.-`( '.' )\n";
    std::cout << "/ /    |_-_|_\n";
    std::cout << "\ `-.-`'V'/ / -.\n";
    std::cout << " `.__,  |/ / ,  |\n";

    system("PAUSE");
}
