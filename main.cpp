#include "sudoku.h"
#include <iostream>


int main()
{

    Sudoku sud;
    std::cout << " Enter numbers "
                 "(in an empty place insert 0) \n";
    sud.enterDigits();

    if (sud.Solve(0, 0)) {
        std::cout << "Solved! \n";
        sud.Print();
    } else
        std::cout << "Is not solved\n";

    return 0;
}
